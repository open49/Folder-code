function [C,B,A] = dir2par(b,a);
% DIRECT-form to PARALLEL-form conversion
% --------------------------------------
% [C,B,A] = dir2par(b,a)
%  C=Polynomial part when length(b) >= length(a)
%  B = Kby2matrix of real coefficients containing bk’s
%  A = Kby3matrix of real coefficients containing ak’s
%  b = numerator polynomial coefficients of DIRECT form
%  a = denominator polynomial coefficients of DIRECT form 
M = length(b); N = length(a);
[r1,p1,C] = residuez(b,a);
p = cplxpair(p1);
I = cplxcomp(p1,p);
r = r1(I);
K = floor(N/2);
B = zeros(K,2);
A = zeros(K,3);
if K*2 == N; %N even, order of A(z) odd, one factor is first order
    for i=1:2:N-2
       Brow = r(i:i+1,:);
       Arow = p(i:i+1,:);
       [Brow,Arow] = residuez(Brow,Arow,[]);
       B(ceil(i/2),:) = real(Brow);
       A(ceil(i/2),:) = real(Arow);
    end
    [Brow,Arow] = residuez(r(N-1),p(N-1),[]);
    B(K,:) = [real(Brow) 0];
    A(K,:) = [real(Arow) 0];
else
    for i=1:2:N-1
        Brow = r(i:i+1,:);
        Arow = p(i:i+1,:);
        [Brow,Arow] = residuez(Brow,Arow,[]);
        B(ceil(i/2),:) = real(Brow);
        A(ceil(i/2),:) = real(Arow);
    end
end