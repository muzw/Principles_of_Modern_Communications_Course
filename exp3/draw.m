function [] = draw( x )
%DRAW 此处显示有关此函数的摘要
%   此处显示详细说明
N = length(x);
grid = 1000;
x = repelem(x,grid);

n = 0:1/grid:N-1/grid;
plot(n,x);
axis([0 N min(x)-1 max(x)+1]); 
xlabel('Time')
ylabel('Amplitude');
end

