#include<bits/stdc++.h>
using namespace std;

bool arePermutation(string str1, string str2) {
    int count[256] = {0};
    if (str1.length() != str2.length())
        return false;
    for (int i=0; str1[i] && str2[i]; i++) {
        count[int(str1[i])]++;
        count[int(str2[i])]--;
    }
    for (int i=0; i<256; i++)
        if (count[i])
            return false;
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s, t;
        cin >> s >> t;
        if (arePermutation(s, t))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
/*Cho hai xâu kí tự s
 và t
 chỉ gồm các chữ cái in thường. Xâu s
 được gọi là hoán vị của xâu t
 nếu có thể thu được xâu s
 từ xâu t
 bằng cách đổi chỗ một số kí tự trong xâu t
. Bạn hãy viết chương trình kiểm tra hai xâu có phải là hoán vị của nhau hay không.

Đầu vào
Dữ liệu vào từ bàn phím gồm 2T+1
 dòng. Dòng đầu tiên chứa số nguyên T
 là số lượng cặp xâu cần kiểm tra. 2T
 dòng tiếp theo, mỗi 2
 dòng chứa 2
 xâu s,t
 trên từng dòng.  Giới hạn: T≤10
 độ dài xâu không vượt quá 104
.

Đầu ra
Với mỗi cặp xâu, in ra màn hình ra yes
 nếu 2
 xâu này là hoán vị của nhau và no
 nếu ngược lại.



For example:

Input
2
abc bac
aab bba
Result
yes
no
*/