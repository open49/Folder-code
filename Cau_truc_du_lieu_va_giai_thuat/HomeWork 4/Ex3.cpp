#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    for(int i = 0; i < n; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }
    sort(intervals.begin(), intervals.end());
    vector<pair<int, int>> merged;
    for(auto interval : intervals) {
        if(merged.empty() || merged.back().second < interval.first) {
            merged.push_back(interval);
        } else {
            merged.back().second = max(merged.back().second, interval.second);
        }
    }
    for(auto interval : merged) {
        cout << interval.first << " " << interval.second << endl;
    }
    return 0;
}
/*
Mỗi khoảng số nguyên được biểu diễn bởi hai số [a,b], trong đó a là điểm bắt đầu và b là điểm kết thúc của đoạn. Hai khoảng số nguyên [a,b] và [c,d] được gọi là chồng lên nhau nếu chúng có điểm chung.  Hợp của Hai khoảng số nguyên chồng lên nhau [a,b] và [c,d] là một khoảng mới có dạng [min(a,c), max(b,d)]. Cho n khoảng số nguyên, bạn hãy viết chương trình hợp các khoảng số nguyên này lại với nhau.
Đầu vào
Dữ liệu đầu vào gồm n+1 dòng. Dòng đầu tiên chứa số nguyên n. n dòng tiếp theo, mỗi dòng chứa 2 số nguyên ai,bi cách nhau bởi một dấu cách là đầu và cuối của các khoảng số nguyên.  Giới hạn: (n≤10^5,|ai|,|bi|≤10^9).
Đầu ra
In ra màn hình các khoảng số nguyên sau khi đã hợp nhất theo thứ tự tăng dần (khoảng [a,b] nhỏ hơn khoảng [c,d] nếu a<c).
For example:
Input
5
1 3
10 15
2 5
3 4
5 8
1 8
Result
10 15
*/