function [  ] = draw( position,t, X,fs,title_string)
% 画出信号X的功率谱和波形

figure(1);
subplot(position);
plot(t(1 :200),X(1 :200));% 画出调制信号波形 
title([title_string '波形']);
xlabel('Time (s)');
ylabel('Amplitude');
figure(2);
subplot(position);
pwelch(X,[],[],[],fs,'centered');  % 计算功率谱
title([title_string '功率谱']);
xlabel('Frequency (Hz)');  % 设置 x 轴标签
ylabel('Power');  % 设置 y 轴标签

end

