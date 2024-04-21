clear;close;clc;
Fs = 8192;
Ts = 1/Fs;
f1 = 220;
f2 = 300;
f3 = 400;
t = 0:Ts:0.3; %2458 samples
x1 = sin(2*pi*f1*t);
x2 = sin(2*pi*f2*t);
x2([1:round(length(t)/3)]) = 0;
x3 = sin(2*pi*f3*t);
x2([1:round(2*length(t)/3)]) = 0;
x = x1 + x2 + x3;
subplot(3,1,1);
plot(t, x);
noise = randn(size(t));
y = x+noise;
subplot(3,1,2);
plot(t, y);
[b,a] = butter(6, [250*2/Fs 350*2/Fs], 'stop');
figure(2)
freqz(b,a)



