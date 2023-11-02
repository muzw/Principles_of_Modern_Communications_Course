%-------------------变量初始化--------------------------
clc;clear;close all
sps = 8;%采样速率 单位：采样点数/符号
N = 0;%绘图编号
%%
%模拟信号发生器
Num = 100;%信号长度
dt = 1/Num;
t = dt : dt : 1;
%s = sin(2*pi*t)%正弦波模拟信号
%s = t;%锯齿波模拟信号
s = [(dt:dt:0.5),(0.5:-dt:dt)];%三角波模拟信号
% s = square(10*pi*t,50);%方波模拟信号

redun = zeros(1,10)+1i*zeros(1,10);%尾部信号冗余
Tdata = complex(s);

%绘制待发序列
N = N+1;figure(N);hold on;grid on;
plot((dt:dt:dt*length(Tdata)),Tdata);
xlabel("Time");ylabel("Amplitude");
%set(gca, 'XTickMode', 'manual', 'XTick', [0.25,0.5,0.75,1]);
title("待发送信号")
%%
%Pluto发送器
tx = sdrtx('Pluto','CenterFrequency',2.5e+09,...
    'BasebandSampleRate',1e6,...
    'Gain',0);
%Pluto接收器
rx = sdrrx('Pluto','CenterFrequency',2.5e+09,...
    'OutputDataType','double',...
    'BasebandSampleRate',1e6,...
    'SamplesPerFrame',5000,...
    'GainSource','Manual',...
    'Gain',40);
%%
%信号发送
tx.transmitRepeat(Tdata');
%信号接收
for k=1:3
    rx();
end
Rx_Sig = rx();
release(tx);%释放Pluto
%%
%绘制接收到的信号
N = N+1;figure(N);hold on;grid on;
plot((dt:dt:dt*length(Rx_Sig(end-500:end))),Rx_Sig(end-500:end));
xlabel("Time");ylabel("Amplitude");
title("接收到的信号")

