/*Viết chương trình nhập vào một cây nhị phân có N
 đỉnh và tính xem cần phải thêm ít nhất bao nhiêu đỉnh để cây nhị phân đó trở thành cây nhị phân đầy đủ (các đỉnh của cây được đánh số từ 0
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
In ra màn hình số lượng đỉnh cần thêm.

For example:

Input	Result
5
0 1
0 2
1 3
2 4
2
*/
#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int value;
    vector<int> children;
};

int calculateAdditionalNodes(int n, vector<vector<int>>& edges) {
    vector<TreeNode> graph(n);

    for (vector<int> edge : edges) {
        int x = edge[0];
        int y = edge[1];
        graph[x].children.push_back(y);
    }

    int additionalNodes = 0;

    for (int i = 0; i < n; i++) {
        int childCount = graph[i].children.size();
        if (childCount == 1 || childCount > 2) {
            additionalNodes += (2 - childCount);
        }
    }

    return additionalNodes;
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

    int additionalNodes = calculateAdditionalNodes(n, edges);
    cout << additionalNodes << endl;

    return 0;
}
