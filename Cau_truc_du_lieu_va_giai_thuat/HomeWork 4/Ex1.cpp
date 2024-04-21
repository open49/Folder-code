#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), compare);
    for (const auto &str : arr) {
        cout << str << endl;
    }
    return 0;
}
/*Cho n xâu kí tự, bạn hãy viết chương trình sắp xếp các xâu kí tự này theo thứ tự độ dài tăng dần, nếu có nhiều xâu có độ dài bằng nhau, sắp xếp các xâu này theo thứ tự từ điển.
Đầu vào
Dữ liệu vào từ bàn phím gồm n+1 dòng. Dòng đầu tiên chứa số nguyên n (n≤104). n dòng tiếp theo mỗi dòng chứa một xâu kí tự có độ dài không vượt quá 20.
Đầu ra
In ra màn hình các xâu sau khi đã sắp xếp, mỗi xâu trên một dòng.
For example:
Input:
5
aaaa
bc
c
abc
bbc
Result:
c
bc
abc
bbc
aaaa
sử dụng c++
*/