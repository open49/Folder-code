/*
Dãy số Fibonacci được tính với công thứ sau:
- F[0]=0
- F[1]=1
- F[n]=F[n−1]+F[n−2] với n≥2


Viết chương trình nhập vào số nguyên n và in ra số Fibonacci thứ n
Đầu vào: Một dòng duy nhất chứa số nguyên n (n≤30)

Đầu ra: Một dòng duy nhất chứa  số Fibonacci thứ n
Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> F(n+1);
    F[0] = 0;
    F[1] = 1;
    for(int i=2; i<=n; i++) {
        F[i] = F[i-1] + F[i-2];
    }
    cout << F[n] << endl;
    return 0;
}
