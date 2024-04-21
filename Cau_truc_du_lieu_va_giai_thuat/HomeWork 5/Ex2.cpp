/*
Một kẻ trộm đột nhập vào một cửa hiệu tìm thấy n đồ vật. 
Mỗi đồ vật có khối lượng và giá trị là các số nguyên dương. 
Tên trộm chỉ có khả năng lấy các đồ vật với tổng trọng lượng không quá M.
Bạn hãy viết chương trình xác định tổng giá trị lớn nhất các đồ vật mà tên trộm có thể lấy đi.
Đầu vào
Dữ liệu vào từ bàn phím gồm n+1 dòng. Dòng đầu tiên gồm 2 số nguyên n,M (n≤15,M≤10^9).
n dòng tiếp theo mỗi dòng chứa 2 số nguyên pi,vi biểu diễn khối lượng và giá trị của đồ vật thứ i (0<pi,vi≤10^9).
Các số nguyên trên cùng một dòng cách nhau bởi một dấu cách.

Đầu ra
In ra màn hình tổng giá trị lớn nhất của các đồ vật mà tên trộm có thể mang đi.

For example:

Input
3 5
4 9
2 6
3 7
Result
13

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, M;
    cin >> n >> M;
    vector<int> p(n+1), v(n+1);
    for(int i=1; i<=n; i++) {
        cin >> p[i] >> v[i];
    }

    vector<long long> dp(M+1, 0);
    for(int i=1; i<=n; i++) {
        for(int j=M; j>=p[i]; j--) {
            dp[j] = max(dp[j], dp[j-p[i]] + v[i]);
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;

    return 0;
}
