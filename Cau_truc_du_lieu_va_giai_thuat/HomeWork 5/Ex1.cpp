/*
Cho một dãy A gồm n số nguyên được đánh số từ 1 đến n. 
Tìm một dãy con liên tiếp của dãy A sao cho tổng các phần tử của dãy này là lớn nhất.
Đầu vào: Dòng đầu tiên chứa số nguyên n. Dòng thứ 2 chứa n số nguyên của dãy A. n≤10^5,Ai≤10^4.
Đầu ra: In ra tổng lớn nhất có thể của một dãy con liên tiếp của dãy A.
Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.
For example:
Input
5
1 -3 2 4 -5
Result
6

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    long long max_so_far = a[0];
    long long max_ending_here = a[0];

    for(int i=1; i<n; i++) {
        max_ending_here = max((long long)a[i], max_ending_here + a[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    cout << max_so_far << endl;

    return 0;
}
