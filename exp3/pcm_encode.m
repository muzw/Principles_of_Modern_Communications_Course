%输入 x 参数为 0－2048 的样值，输出 out 为 8 位二进制码
function [out]=pcm_encode(x)
n=length(x);
for i=1:n
%编写极性码
 if x(i)>0
    out(i,1)=1;
 else
    out(i,1)=0;
 end
%编写段落码并计算量化间隔和量化起始电平
 if 0<=abs(x(i))&abs(x(i))<16
%段落码
    out(i,2)=0;out(i,3)=0;out(i,4)=0;
%量化间隔
    step=1;
%起始电平
    st=0;
 elseif 16<=abs(x(i))&abs(x(i))<32
    out(i,2)=0;out(i,3)=0;out(i,4)=1;step=1;st=16;
 elseif 32<=abs(x(i))&abs(x(i))<64
    out(i,2)=0;out(i,3)=1;out(i,4)=0;step=2;st=32;
 elseif 64<=abs(x(i))&abs(x(i))<128
    out(i,2)=0;out(i,3)=1;out(i,4)=1;step=4;st=64;
 elseif 128<=abs(x(i))&abs(x(i))<256
    out(i,2)=1;out(i,3)=0;out(i,4)=0;step=8;st=128;
 elseif 256<=abs(x(i))&abs(x(i))<512
    out(i,2)=1;out(i,3)=0;out(i,4)=1;step=16;st=256;
 elseif 512<=abs(x(i))&abs(x(i))<1024
    out(i,2)=1;out(i,3)=1;out(i,4)=0;step=32;st=512;
 else
    out(i,2)=1;out(i,3)=1;out(i,4)=1;step=64;st=1024;
 end
 if (abs(x(i))>=2048)
    %处理过载现象
    out(i,2:8)=[1 1 1 1 1 1 1];
 else
    %计算段内码
    tmp=floor((abs(x(i))-st)/step);
 %十进制转二进制数，%如果不减48，最后4位是ASCII数
 % 49 48 48 48 
    t=dec2bin(tmp,4)-48;
    out(i,5:8)=t(1:4);
 end
end
out=reshape(out',1,8*n);
end
