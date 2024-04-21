/*Cây nhị phân cân bằng là cây nhị phân có độ cao lớn nhất của các đỉnh lá (độ sâu của cây) là nhỏ nhất có thể. Viết chương trình nhập vào một cây có N
 đỉnh và kiểm tra đó có phải là cây nhị phân cân bằng hay không (các đỉnh của cây được đánh số từ 0
 đến N−1
 và gốc của cây là đỉnh 0
).

Đầu vào
Đầu vào từ bàn phím gồm N
 dòng. Dòng đầu tiên chứa số nguyên N
 là số đỉnh của cây (N≤1000)
, N−1
 dòng tiếp theo mỗi dòng chứa 2 số nguyên cách nhau bởi một dấu cách, biểu diễn một cạnh của cây .

Đầu ra
In ra màn hình "yes" nếu đó là cây nhị phân cân bằng và "no" nếu ngược lại.

For example:

Input	Result
3
0 1
0 2
yes
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int height[1005];

int dfs(int u, int parent) {
    int h = 0;
    for (int v : adj[u]) {
        if (v == parent) continue;
        h = max(h, dfs(v, u));
    }
    return height[u] = h + 1;
}

bool isBalanced(int u, int parent) {
    int maxChildHeight = 0;
    int secondMaxChildHeight = 0;
    for (int v : adj[u]) {
        if (v == parent) continue;
        if (height[v] >= maxChildHeight) {
            secondMaxChildHeight = maxChildHeight;
            maxChildHeight = height[v];
        } else if (height[v] > secondMaxChildHeight) {
            secondMaxChildHeight = height[v];
        }
    }
    if (maxChildHeight - secondMaxChildHeight > 1) return false;
    for (int v : adj[u]) {
        if (v == parent) continue;
        if (!isBalanced(v, u)) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0, -1);
    
    if (isBalanced(0, -1)) cout << "yes\n";
    else cout << "no\n";

    return 0;
}
