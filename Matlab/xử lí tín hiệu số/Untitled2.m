T = 1/1000;
L = 1000; %chieu dai tin hieu 
t = (0:L -1)*T;
x = 0.7*sin(2*pi*50*t)+sin(2*pi*120*t);
subplot(4,2,1)
plot(t(1:50),x(1:50))
y = x +2*randn(size(t));
subplot(4,2,2)
plot(t(1:50),y(1:50))
Fs = 90;%tan so lay mau
Ts = 1/Fs;
t1 = (0:L-1)&Ts;
x1 = 0.7*sin(2*pi*50*t1)+sin(2*pi*120*t1);
y1 = x1+ 2*randn(size(t1));
subplot(4,2,3);
plot(t1(1:50),x1(1:50))
subplot(4,2,4);
plot(t1(1:50),y1(1:50))
X= fft(x,1024)/L;
f_axis = 1000/2*linspace(0,1,513);
subplot(4,2,5);
plot(f_axis, 2*abs(X(1:513)));

X1 =fft(x1,1024)/l;



