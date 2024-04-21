#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string &str1, string &str2) {
    size_t j = 0; // Use size_t to match the type of string length
    for (size_t i = 0; i < str2.length() && j < str1.length(); i++) {
        if (str1[j] == str2[i])
            j++;
    }
    return (j == str1.length());
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> dict(n);
    for (int i = 0; i < n; i++)
        cin >> dict[i];
    
    sort(dict.begin(), dict.end());
    string result = "";
    
    for (int i = 0; i < n; i++) {
        if (isSubsequence(dict[i], s)) {
            if (dict[i].length() > result.length())
                result = dict[i];
        }
    }
    
    cout << result;
    
    return 0;
}
/*Cho một xâu s
 và một bộ từ điển chứa n
 từ ( các từ chỉ chứa các chữ cái in thường).  Tìm từ có độ dài lớn nhất trong từ điển sao cho có thể tạo thành từ này bằng cách xóa đi một số ký tự trong xâu s
. Nếu có nhiều từ có độ dài bằng nhau, in ra từ có

Đầu vào: Dòng đầu tiên chứa xâu s
. Dòng thứ hai chứa số nguyên n
. n
 dòng tiếp theo, mỗi dòng chứa một xâu trong từ điên. (n≤1000,
 đô dài các xâu không vượt quá 1000)
.

Đầu ra: In ra xâu có độ dài lớn nhất thỏa mãn điều kiện. Nếu có nhiều từ có độ dài bằng nhau, in ra từ có thứ tự từ điển nhỏ nhất.

Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.

For example:

Input
decodae
3
decas
code
deco
Result
code
*/