Fs=64; Fd=1;N=200; 
sym=[-1;1]; 
alpha=0.5; 
iS=randi([1,length(sym)],N,1); 
S=sym(iS); 

H=rcosine(Fd, Fs, 'fir', alpha);
ch=[0.9806; -0.1961];
ch=ch/norm(ch); 
S1=filter(ch, 1, S);
S1=upsample(S1, Fs/Fd); 
X=filter(H, 1, S1); 



plot(X(1:2000) ); %  下图左 
Y=X(Fs*4+1:end-Fs*4); 
title('码间串扰');
xlabel('time')
ylabel('Amplitude')
eyediagram(Y, Fs*2); %  下图右
title('码间串扰');