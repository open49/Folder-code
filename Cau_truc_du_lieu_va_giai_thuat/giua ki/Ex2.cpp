#include <iostream>
#include <vector>
#include <queue>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> tree(N);
    std::vector<int> depth(N, -1);
    for(int i=0; i<N-1; i++) {
        int x, y;
        std::cin >> x >> y;
        tree[x].push_back(y);
    }

    std::queue<int> q;
    q.push(0);
    depth[0] = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(int child : tree[node]) {
            depth[child] = depth[node] + 1;
            q.push(child);
        }
    }

    int leaf_depth = -1;
    for(int i=0; i<N; i++) {
        if(tree[i].size() == 0) {
            if(leaf_depth == -1)
                leaf_depth = depth[i];
            else if(leaf_depth != depth[i]) {
                std::cout << "no";
                return 0;
            }
        }
    }
    std::cout << "yes";
    return 0;
}
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