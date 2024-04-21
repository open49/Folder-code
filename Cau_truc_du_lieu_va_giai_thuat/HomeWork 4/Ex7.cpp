#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end(), compare);
    
    for(int i=0; i<n; i++)
        cout << arr[i];
    
    return 0;
}
/*Cho một dãy gồm n
 số nguyên không âm, bạn hãy viết chương trình sắp xếp dãy số này sao cho khi nối các số  lại với nhau thì ta thu được một số nguyên có giá trị lớn nhất.

Gợi ý: Bạn có thể sắp xếp các số đã cho theo thứ tự: a
 đừng trước b
 nếu như ab¯¯¯¯¯>ba¯¯¯¯¯
. Sau đó nối các phần tử thuộc dãy số đã sắp xếp lại với nhau để có được kết quả.

Đầu vào
Dữ liệu vào từ bàn phím gồm 2
 dòng. Dòng đầu tiên chứa số nguyên n
. Dòng thứ hai chứa n
 số nguyên của dãy số cách nhau bởi một dấu cách. Giới hạn: (n≤105,
 các số nguyến trong dãy số không vượt quá 109)
.

Đầu ra
In ra màn hình số nguyên lớn nhất có thể đạt được.

For example:

Input
4
20 9 3 2
Result
93220
*/