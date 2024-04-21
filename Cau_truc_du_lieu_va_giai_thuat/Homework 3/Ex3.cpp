/*Cây nhị phân đầy đủ là cây mà mỗi đỉnh có 0 hoặc 2 đỉnh con. Viết chương trình nhập vào một cây có N đỉnh và kiểm tra xem có phải là cây nhị phân đầy đủ hay không (các đỉnh của cây được đánh số từ 0 đến N−1 và gốc của cây là đỉnh 0).
Đầu vào
Dữ liệu vào từ bàn phím gồm N dòng. Dòng đầu tiên chứa số nguyên N là số đỉnh của cây (N≤1000). N−1 dòng tiếp theo mỗi dòng chứa 2 số nguyên x,y biểu diễn một cạnh của cây trong đó đỉnh y là con của đỉnh x .
Đầu ra
In ra màn hình "yes" nếu đó là cây nhị phân đầy đủ và "no" nếu ngược lại.
For example:
input:
5
0 1
0 2
2 3
2 4
result:
yes
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> tree[1005];
bool visited[1005];

void dfs(int node) {
    visited[node] = true;
    for(size_t i = 0; i < tree[node].size(); i++) {
        if(!visited[tree[node][i]]) {
            dfs(tree[node][i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
    }
    dfs(0);
    for(int i = 0; i < n; i++) {
        if(!visited[i] || (tree[i].size() != 2 && tree[i].size() != 0)) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
