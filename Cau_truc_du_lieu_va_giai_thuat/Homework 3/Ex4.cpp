/*Cây nhị phân T
 được gọi là hoàn hảo nếu nó thỏa mãn hai điều kiện sau:

Mỗi đỉnh của cây T
 có đúng hai đỉnh con.
Các đỉnh lá của cây T
 có độ sâu bằng nhau (độ sâu của một đỉnh được tính bằng số cạnh nằm trên đường đi từ đỉnh gốc đến đỉnh đó).
Bạn hãy viết chương trình nhập vào một cây có N
 đỉnh và kiểm tra xem có phải là cây nhị phân hoàn hảo hay không (các đỉnh của cây được đánh số từ 0
 đến N−1
 và gốc của cây là đỉnh 0
 ).
Đầu vào
Dữ liệu vào từ bàn phím gồm N
 dòng. Dòng đầu tiên chứa số nguyên N
 là số đỉnh của cây (N≤1000)
. N−1
 dòng tiếp theo mỗi dòng chứa 2 số nguyên x,y
  biểu diễn một cạnh của cây trong đó đỉnh y
 là con của đỉnh x
.

Đầu ra
In ra "yes" nếu đó là cây nhị phân hoàn hảo và "no" nếu ngược lại.

For example:

Input	Result
7
0 1
0 2
1 3 
1 4
2 5
2 6
yes
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> tree[1005];
int depth[1005];

void dfs(int u, int p){
    for(int v : tree[u]){
        if(v == p) continue;
        depth[v] = depth[u] + 1;
        dfs(v, u);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(0, -1);
    int leaf_depth = -1;
    for(int i = 0; i < n; i++){
        if(tree[i].size() == 1){
            if(leaf_depth == -1) leaf_depth = depth[i];
            else if(leaf_depth != depth[i]){
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
}
