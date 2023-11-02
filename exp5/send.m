clear all
close all
clc

CenterFrequency    =    1000000000 ;    %中心频率 1GHZ
BasebandSampleRate =  30.72e6 ;         %基带采样率 30.72MHz
 
txPluto  = sdrtx('Pluto');
txPluto.RadioID =  'usb:0' ;
txPluto.CenterFrequency  =  CenterFrequency ;      
txPluto.BasebandSampleRate =  BasebandSampleRate  ;        
txPluto.ChannelMapping     = 1;
txPluto.Gain = 0 ;                          %发射端增益
 
%%生成信号
%基带采样率：30.72MHz
%基带信号频率 10KHz
%点数：65536
fc = 100e3;                  %基带信号频率 10KHz
fs = BasebandSampleRate;    
N =  65536*2 ;
t = (1:N)/fs ;
f = fs*(0:N-1)/N  ;
input=exp(1i*2*pi*fc*t )'; 
 
figure(1);
plot(t,real(input));
figure(2);
plot( f  , 20*log10( abs(   fft(input) )  ) ) ;
%%发送数据
%发送100次
for a = 0:100 
  txPluto(input); 
end




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

