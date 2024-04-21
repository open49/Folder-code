function [y n] = conv_sig(x1 , n1 , x2, n2)
len = length(n1) + length(n2) - 1;
n = n1(1)+n2(1) : n1 (end) +n2(end);
y = zeros(1,len);
y1 = y ; y2 =y;
for i =1 : length(x1)
    y1(i) = x1(1);
end
for i =1 : length(x2)
    y2(i) = x2(i);
end
for i =1 :len 
    for j = 1:i
        y(i) = y(i) +y1(j) *y2(i+1-j);
    end
end
end
