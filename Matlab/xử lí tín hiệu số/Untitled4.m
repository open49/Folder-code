n1 = -10 ;
n2 = 20 ;
n = n1:n2;
x = 0.8.^n.*delta_pulse(n1,n2,0);
h = (-0.9).^n*delta_pulse(n1,n2,0 );
y = conv(x,h);
stem(y)