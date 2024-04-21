#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> A(n), S(n);
    for(int i=0; i<n; i++)
        std::cin >> A[i];

    S[0] = A[0];
    for(int i=1; i<n; i++)
        S[i] = S[i-1] + A[i];

    for(int i=0; i<n; i++)
        std::cout << S[i] << " ";

    return 0;
}
/*Cho dãy số A
 gồm n
 phần tử được đánh số thứ tự từ 1
 đến n
.

Viết chương trình in ra dãy số S
 gồm n
 phần tử, trong đó phần tử thứ i
 được tính theo công thức sau:

Si=∑ij=1Ai

Đầu vào
Đầu vào từ bàn phím gồm hai dòng:

Dòng đầu tiên chứa số nguyên n
 (n≤1000)
;
Dòng thứ hai chứa n
 số nguyên phân tách nhau bởi dấu cách, ứng với n
 phần tử của dãy số A
.
Đầu ra
In ra màn hình một dòng duy nhất chứa n
 số nguyên là n
 phần tử của dãy S
.

Phân tách các phần tử trong dãy số bằng một dấu cách duy nhất.

For example:

Input	Result
5
1 1 1 1 1
1 2 3 4 5
*/