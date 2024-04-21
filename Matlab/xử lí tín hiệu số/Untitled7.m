b0 = b(1);
b = b/ b0;
a0 = a(1);
a= a/a0;
b0 = b0/a0;
N = length (a) -1 ;
broots =cplxpair(roots(b));
aroots = cplxpair(root(a));
for i= 1:2:N
    A(ceil(i/2),:) =poly (aroots(i: i+1,:));
    B(ceil(i/2),:) = poly(broots(i : i+1,:));
end
A
B