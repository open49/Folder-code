/*Có 3 dạng truy vấn khác nhau được thực hiện trên một dãy số:
- 1 x thêm phần tử x vào cuối dãy số
- 2 xóa phần tử cuối cùng của dãy số
- 3 in ra phần tử lớn nhất trong dãy số
Cho một dãy số rỗng, bạn hãy viết chương trình thực hiện N truy vấn trên dãy số này.
Đầu vào
Dòng đầu tiên chứa số nguyên N.
N dòng tiếp theo, mỗi dòng tương ứng với một trong 3 loại truy vấn (N≤105,x≤109)
Đầu ra
Với mỗi truy vấn loại 3, in ra phần tử lớn nhất trong dãy số.
For example:
Input
10
1  97
2
1  20
2
1  26
1  20
2
3
1  91
3
output
26
91
*/#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> s;
    int maxElement = INT_MIN; // biến lưu giá trị lớn nhất

    for(int i = 0; i < N; i++) {
        int type;
        cin >> type;
        if(type == 1) {
            int x;
            cin >> x;
            maxElement = max(maxElement, x);
            s.push_back(x);
        } else if(type == 2) {
            if(s.back() == maxElement) {
                s.pop_back();
                if(s.empty()) {
                    maxElement = INT_MIN;
                } else {
                    maxElement = *max_element(s.begin(), s.end());
                }
            } else {
                s.pop_back();
            }
        } else if(type == 3) {
            cout << maxElement << endl;
        }
    }

    return 0;
}
