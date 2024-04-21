clear;close;clc
Fs = 8000;
Ts = 1/Fs;
t= (0 : Ts:2);
F_h =440;
Tone_A = sin(2*pi*F_A*t);
sound(Tone_A);
pause(3);

noise_A = sin(2*pi*1500*t);
sound(noise_A);
pause(3);

Tone_A_noise= tone_A+ noise;
sound(Tone_A_noise);
pause(3);


