#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> citations(n);
    for(int i=0; i<n; i++) {
        cin >> citations[i];
    }
    sort(citations.begin(), citations.end(), greater<int>());
    int hIndex = 0;
    for(int i=0; i<n; i++) {
        if(citations[i] >= i+1) {
            hIndex = i+1;
        } else {
            break;
        }
    }
    cout << hIndex;
    return 0;
}
/*
Thầy Long viết n bài báo  khoa học, mỗi bài báo của thầy Long được một số người đọc và trích dẫn tham khảo. Mức độ ảnh hưởng của các nhà khoa học có thể được đánh gia thông qua chỉ số h-index. Chỉ số h-index càng cao, thì mức độ ảnh hưởng càng cao.  Chỉ số h index của một nhà khoa học là k nếu như nhà khoa học đó có ít nhât k bài báo, mà mỗi bài báo được trích dẫn ít nhất k lần.  Cho một dãy n số biểu diễn số lần các bài báo khoa học của thầy Long được trích dẫn, bạn hãy viết chương trình tính chỉ số h-index lớn nhất của thầy Long nhé. 
Đầu vào
Dữ liệu vào từ bàn phím gồm 2 dòng. Dòng đầu tiên chứa số nguyên n là số lượng bài báo của thầy Long (n≤104). Dòng thứ hai chứa n số nguyên, cách nhau bởi một dấu cách, là số lượng trích dẫn của từng bài báo  số lượng trích dẫn của từng bài báo và không vượt quá 105.
Đầu ra 
In ra màn hình chỉ số h-index của thầy Long.
For example:
Input
5
10 8 5 3 3
Result
3
use c++
*/