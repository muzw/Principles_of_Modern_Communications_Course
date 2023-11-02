function [f,sf]=T2F(t,st)%该子函数需要两个参数 t 和 st。
%t—离散时间；st—离散信号
dt=t(2)-t(1) ;% 时间分辨率
T=t(end) ;
df=1/T ;%频率分辨率
N=length(st) ;%离散傅立叶变换长度
f=-N/2*df :df :N/2*df-df ;%设定频谱区间，注意要关于原点对称，共有 N 个点，包括 0 点，%
sf=fft(st);
sf=T/N*fftshift(sf);

end

