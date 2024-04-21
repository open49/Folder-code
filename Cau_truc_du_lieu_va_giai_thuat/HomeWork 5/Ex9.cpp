/*
Cho một ma trận A có kích thước n×n mà các phần tử trên cùng một hàng hoặc cùng một cột được sắp xếp tăng dần. Có Q truy vấn, với mỗi truy vấn, bạn được cho biết một số nguyên k và cần kiểm tra k có thuộc ma trận A hay không.

Đầu vào: Dòng đầu tiên chứa 2 số nguyên n,Q. n dòng tiếp theo mỗi dòng chứa n số nguyên biểu diễn các phần tử của ma trận A. Dòng tiếp theo chứa Q số nguyên cần kiểm tra. (n≤1000,Q≤100,0≤ Aij ≤10^7,0≤ k ≤10^7).

Đầu ra: Gồm Q tương ứng với Q truy vấn, in ra yes nếu số nguyên cần kiểm tra thuộc ma trận A và no nếu ngược lại.
Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.
For example:
Input
3 2
1 2 6
2 4 9
5 8 10
7 9
Result
no
yes

*/
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int i = 0, j = n - 1;
    while (i < n && j >= 0) {
        if (matrix[i][j] == target) {
            return true;
        } else if (matrix[i][j] > target) {
            j--;
        } else {
            i++;
        }
    }
    return false;
}

int main() {
    int n, Q;
    cin >> n >> Q;
    vector<vector<int>> A(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> A[i][j];
        }
    }
    while(Q--) {
        int k;
        cin >> k;
        cout << (searchMatrix(A, k) ? "yes" : "no") << endl;
    }
    return 0;
}
