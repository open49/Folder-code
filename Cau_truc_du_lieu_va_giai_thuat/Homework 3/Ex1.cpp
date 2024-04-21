/*Cây nhị phân là cây mà mỗi đỉnh có tối đa 2 đỉnh con. Viết chương trình nhập vào một cây có N
 đỉnh và kiểm tra xem có phải là cây nhị phân hay không (các đỉnh của cây được đánh số từ 0
 đến N−1
 và gốc của cây là đỉnh 0
 ).

Đầu vào
Dữ liệu vào từ bàn phím gồm n
 dòng. Dòng đầu tiên chứa số nguyên N
 là số đỉnh của cây (N≤1000)
. N−1
 dòng tiếp theo mỗi dòng chứa 2 số nguyên dương x,y
 biểu diễn một cạnh của cây trong đó y
 là đỉnh con của đỉnh x
 .

Đầu ra
In ra màn hình "yes" nếu đó là cây nhị phân và "no" nếu ngược lại.

For example:

Input	Result
5
0 1
1 2
2 3
3 4
yes
*/
#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int value;
    vector<int> children;
};

bool isBinaryTree(int n, vector<vector<int>>& edges) {
    vector<TreeNode> graph(n);

    for (vector<int> edge : edges) {
        int x = edge[0];
        int y = edge[1];
        graph[x].children.push_back(y);
    }

    for (TreeNode node : graph) {
        if (node.children.size() > 2) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> edges(n - 1);

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        edges[i] = {x, y};
    }

    if (isBinaryTree(n, edges)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
