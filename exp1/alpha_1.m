Fs=64; Fd=1;N=200; 
sym=[-1;1]; 
alpha=1; 
iS=randi([1,length(sym)],N,1); 
S=sym(iS); 
H=rcosine(Fd, Fs, 'fir', alpha); 
S1=upsample(S, Fs/Fd); 
X=filter(H, 1, S1); 

plot(X(1:2000) ); %  下图左 
Y=X(Fs*4+1:end-Fs*4); 
title('滚降系数1')
xlabel('time')
ylabel('Amplitude')
eyediagram(Y, Fs*2); %  下图右
title('滚降系数1')