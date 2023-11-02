% 定义采样频率和截止频率
fss =2; % 截止频率
% 计算Butterworth滤波器的系数
order = 2; % 滤波器阶数
[b2, a2] = butter(order, fss/(fs/2), 'low'); % 计算系数