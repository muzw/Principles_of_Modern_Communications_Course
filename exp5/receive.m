clear all
close all
clc

%pluto rx 设置
rxPluto  = sdrrx('Pluto');
rxPluto.CenterFrequency = 2400000000;   %设置中心频率 2.4GHz
rxPluto.BasebandSampleRate = 18e6;      %设置采样率 ：18MHz
rxPluto.SamplesPerFrame = 1024 ;        %设置采样点数:1024
 
fs  =  rxPluto.BasebandSampleRate ;     
N   =  rxPluto.SamplesPerFrame ;        
freq = (-N/2:N/2-1)/N* fs/1000000 ;     
 
% 接收信号
% data即收到的信号，datavalid指示数据是否有效，overflow指示数据是否溢出。
[data,datavalid,overflow] = rxPluto();  %利用 pluto进行数据接收
 
XK  =   fft( data );                    %fft变换
 
figure(1);
plot(freq,20*log10( fftshift(abs( XK )) ) );  %绘制数据的频谱
 
figure(2);
plot(real(data)); hold on;  %绘制数据实部
plot(imag(data));           %绘制数据虚部
