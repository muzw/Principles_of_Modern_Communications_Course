function decoder_output=viterbi_decode(y,G)
n=size(G,1);
K=size(G,2);
number_of_states=2^(K-1); 
%-------------生成各分支的输出-------------------
for j=0:number_of_states-1
 for t=0:1
    [next_state,memory_contents]=next_state_fun(j,t,K);
    input(j+1,next_state+1)=t;
    branch_output=rem(memory_contents*G',2);
    nextstate(j+1,t+1)=next_state;
    output(j+1,t+1)=bin2dec(num2str(branch_output,'%d'));
 end
end 
%------------------------------------------------
metric_of_states=zeros(1,number_of_states); %各状态的度量
metric_of_states_c=zeros(number_of_states,2); %各状态两个输入的度量
length_seq=length(y)/n; %符号个数
channel_output_matrix=reshape(y,n,length_seq); %将解调输出的比特按符号排列
survivor_state=zeros(number_of_states,length_seq+1); %留存路径
input_of_state=zeros(number_of_states,length_seq+1,2); %汇聚到各状态的分支对应的输入 
count=zeros(1,number_of_states);
%模拟维特比译码网格图的前两层
for i = [1, 2]
    if i == 1
        j_index = 0;
    else
        j_index = [0 2];
    end
    
    for j = j_index   
        for t = 0:1
            binary_output=dec2bin(output(j+1,t+1),n); %将各分支的输出转换为 2 进制
            branch_metric=Hamming_dis(channel_output_matrix(:,i)',binary_output); %计算分支度量
            metric_of_states_c(nextstate(j+1,t+1)+1,1) = metric_of_states(j+1)+branch_metric; %计算累积度量（加） 
            input_of_state(nextstate(j+1,t+1)+1, 1:i-1,1) = survivor_state(j+1, 1:i-1);
            input_of_state(nextstate(j+1,t+1)+1, i,1) = t;
        end
    end
    metric_of_states = metric_of_states_c(:,1);
    survivor_state = input_of_state(:,:,1);
end;
%模拟维特比译码网格图
for i=2:length_seq 
    for j=0:number_of_states-1       
        for t=0:1
            binary_output=dec2bin(output(j+1,t+1),n); %将各分支的输出转换为 2 进制
            branch_metric=Hamming_dis(channel_output_matrix(:,i)',binary_output); %计算分支度量
            count(nextstate(j+1,t+1)+1)=count(nextstate(j+1,t+1)+1)+1; 
            metric_of_states_c(nextstate(j+1,t+1)+1,count(nextstate(j+1,t+1)+1))=metric_of_states(j+1)+branch_metric; %计算累积度量（加） 
            input_of_state(nextstate(j+1,t+1)+1,:,count(nextstate(j+1,t+1)+1))=survivor_state(j+1,:); %该分支所在路径的对应的输入
            input_of_state(nextstate(j+1,t+1)+1,i,count(nextstate(j+1,t+1)+1))=t;
        end;
    end;
%----------------比较汇聚到同一状态的两条路径，选取距离较小的-----------------
     for j=0:number_of_states-1
         if metric_of_states_c(j+1,1)>=metric_of_states_c(j+1,2)
             metric_of_states(j+1)=metric_of_states_c(j+1,2);
             survivor_state(j+1,:)=input_of_state(j+1,:,2);
         else
             metric_of_states(j+1)=metric_of_states_c(j+1,1);
             survivor_state(j+1,:)=input_of_state(j+1,:,1);
         end;
     end;
     count=zeros(1,number_of_states); 
end;
%选择最后到达00状态的度量最小的路径作为译码输出
decoder_output = survivor_state(1,1:length_seq-K+1); % 去掉译码后边的K-1个译码附带的0
end