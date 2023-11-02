%------------------------------------定义卷积码编译码系统参数
G = [1 1 1; 1 0 1];         %生成多项式
n=size(G,1);%
K=size(G,2);%

%------------------------------------随机生成待编码序列，并进行卷积编码
L = 10000;   %待编码序列长度
encode_in = randi([0,1], [1,L]);
encode_out = conv_encode(encode_in, G);

%------------------------------------将编码后的序列通过信道，并模拟信道噪声
code_noise = awgn(encode_out,10);
for i = 1:2*L+(K-1)*n
    if code_noise (i) >= 0.5
        code_noise(i) = 1;
    else
        code_noise(i) = 0;
    end
end
%------------------------------------计算信道噪声的误码率
channel_error = encode_out ~= code_noise;
channel_error_rate = sum(channel_error)/length(channel_error);

%------------------------------------对信道噪声干扰后的序列进行维特比译码
decode_out = viterbi_decode(code_noise, G);

%------------------------------------计算译码的误码率
decode_error = decode_out ~= encode_in;
decode_error_rate = sum(decode_error)/length(decode_error);

