#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool compare(int a, int b) {
    int sumA = sumOfDigits(a);
    int sumB = sumOfDigits(b);
    if(sumA == sumB)
        return a < b;
    return sumA < sumB;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end(), compare);
    
    for(int i=0; i<n; i++)
        cout << arr[i] <<endl;
    
    return 0;
}
/*Cho n
 số nguyên,  bạn hãy viết chương trình sắp xếp các số này theo thứ tự  tổng các chữ số tăng dần. Tức là, tổng các chữ số của số đứng trước nhỏ hơn hoặc bằng tổng các chữ số của số đứng sau. Nếu hai số có tổng các chữ số bằng nhau, thì số nhỏ hơn sẽ đứng trước.

Đầu vào
Dữ liệu vào từ bàn phím gồm n+1
 dòng. Dòng đầu tiên chứa số nguyên n
 (n≤104)
. n
 dòng tiếp theo mỗi dòng chứa một số nguyên không vượt quá 107
.

Đầu ra
In ra màn hình các số sau khi đã sắp xếp, các số phân tách nhau bởi một dấu cách.


For example:

Input
5
12
1000
200
30
2
Result
1000
2
200
12
30
*/