/*
Viết chương trình nhập vào 2 số nguyên a,b và tính a^b bằng đệ quy.

Đầu vào: Một dòng duy nhất chứa 2 số nguyên a,b (a,b≤10)

Đầu ra: Một dòng duy nhất chứa giá trị a^b

Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.
*/
#include<bits/stdc++.h>
using namespace std;

long long power(int a, int b) {
    if(b == 0) {
        return 1;
    } else {
        return a * power(a, b-1);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}
