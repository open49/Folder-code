/*Cho mảng A có n phần tử được sắp xếp tăng dần và số nguyên x. Cho Q câu truy vấn, mỗi câu truy vấn sẽ hỏi xem 1 số nguyên x có nằm trong dãy A hay không. Bạn hãy viết chương trình trả lời Q câu truy vấn trên.
Đầu vào
Dữ liệu vào từ bàn phím gồm ba dòng. Dòng đầu tiên chứa 2 số nguyên n,Q (n,Q≤10^5). Dòng thứ hai chứa n số nguyên biểu diễn các phần tử của dãy A.  Dòng thứ ba chứa Q số nguyên thể hiện Q truy vấn.

Đầu ra
In ra màn hình Q dòng, mỗi dòng in  ra "YES" nếu phần tử trong câu truy vấn tương ứng thuộc dãy A  và "NO" nếu ngược lại.
For example:

Input
5 3
1 2 4 7 10
4 3 10
Result
YES
NO
YES
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, Q;
    cin >> n >> Q;
    vector<int> A(n);
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    while(Q--) {
        int x;
        cin >> x;
        if(binary_search(A.begin(), A.end(), x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

