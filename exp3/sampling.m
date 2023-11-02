%低通抽样定理
clear all;
close all;
dt=0.01;
t=0:dt:10;
xt=0.1*cos(0.15*pi*t)+0.5*cos(4*pi*t);
[f,xf]=T2F(t,xt);
%抽样信号，抽样频率为4Hz
fs=4;
sdt=1/fs;
t1=0:sdt:10;
st=0.1*cos(0.15*pi*t1)+ 0.5*cos(4*pi*t1);

%恢复原始信号
t2=-50:dt:50;
gt=sinc(fs*t2);
stt=upsample(st,sdt/dt);
[f1,sf]=T2F(t,stt);
xt_t=conv(stt,gt);
[f2,ssf]=T2F(t,xt_t(5000:6000));

figure(1);
subplot(311);
plot(t,xt);
title('原始信号');
subplot(312);
stem(t1,st);
title('抽样信号');
subplot(313);
t3=-50:dt:60+sdt-dt;
plot(t3,xt_t); 
title('抽样信号恢复'); 
axis([0 10 -1 1]); 

figure(2);
subplot(311);
plot(f,abs(xf));
title('原始信号频谱');
xlim([-10 10]);
xlabel('Frequency (Hz)');  % 设置 x 轴标签
ylabel('Amplitude');  % 设置 y 轴标签
subplot(312);
H = plot(f1,abs(sf));
title('抽样信号频谱');
xlim([-20 20]);
xlabel('Frequency (Hz)');  % 设置 x 轴标签
ylabel('Amplitude');  % 设置 y 轴标签
subplot(313);
plot(f2,abs(ssf)); 
title('抽样信号恢复频谱'); 
xlim([-10 10]);
xlabel('Frequency (Hz)');  % 设置 x 轴标签
ylabel('Amplitude');  % 设置 y 轴标签
