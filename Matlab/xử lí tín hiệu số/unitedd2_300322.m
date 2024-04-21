clear;

a = [1 -4 3 ];
b = [1 1];
[h,n] = impz(b,a,50);
x = 2.^n*step_unit(0,49,0).';
subplot(6,1,1)
stem(n,h)
subplot(6,1,2)
y = filter(b,a,x);
stemp (n,y)
[y2 n] = conv_sig(x,n,h,n);
subplot (6,1,3)
stem(n, y2)


