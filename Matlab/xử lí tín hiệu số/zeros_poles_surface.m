clc,clear, close all;


[Re,Im] = meshgrid(linspace(-3,3,100),linspace(-3,3,100));
z = Re+ Im*j;
A = [0 1 -1];
B = [1 1.2732 0.81];
X = (z.^(-1) - z.^(-2))./ (1+1.2732*z.^(-1) + 0.81*z.^(-2));
surf(Re,Im, abs(X))
hold on
viscircles([0,0],1)
hold on

zeros = roots(A);
poles = roots(B);
plot(real(zeros),imag(zeros), 'ob','linewidth',5)
hold on
plot(real(poles),imag(poles), 'xg','linewidth',5)
colormap(jet)