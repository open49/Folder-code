clc,clear,close all;

F0 = 1/50; T0 = 1/F0;
FS = 1; TS = 1/FS;
N = 200;
t = 0:1/FS: (N-1)*TS;
x = sin(2*pi*F0*t);
stem(t,x)
%%
L = 9;
b = log2(L); 
floating_point = 2;
delta = round(2/(L-1),floating_point);
xq_trun = fix(x/delta)*delta;
e_trun = x - xq_trun;
xq_round = round(x/delta)*delta;
e_round = x - xq_round;
Px = mean(x.^2);
Pq_trun = (mean(e_trun.^2));
Pq_round = (mean(e_round.^2));

SQNR_trun = 10*log10(Px/Pq_trun);
SQNR_round = 10*log10(Px/Pq_round);


