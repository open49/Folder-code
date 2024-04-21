T = 1/1000;
L = 1000; %chieu dai tin hieu 
t = (0:L -1)*T;
x = 0.7*sin(2*pi*50*t)+sin(2*pi*120*t);
subplot(4,1,1)
plot(t,x)
y = x +2*randn(size(t));
subplot(4,1,2)
plot(t,y)
Fs = 90;%tan so lay mau
Ts = 1/Fs;
t1 = (0:L-1)&Ts;
x1 = 0.7*sin(2*pi*50*t1)+sin(2*pi*120*t1);
y1 = x1+ 2*randn(size(t1));

