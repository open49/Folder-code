function [x,n] = delta_pulse (n1,n2,n0)
n = [n1:n2];
x = [(n - n0)>= 0 ];
end
