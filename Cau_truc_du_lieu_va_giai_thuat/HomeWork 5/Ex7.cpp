/*
Cho một dãy số gồm N số nguyên. Tìm và in ra phần tử nhỏ thứ k của dãy 
(sử dụng chia để trị để giải bài toán này với độ phức tạp O(N)).

Đầu vào: Dòng đầu tiên chứa 2 số nguyên N,k, (0<k≤N≤10^5).
Dòng thứ 2 chứa N số nguyên biểu diễn dãy số đã cho.
Đầu ra: In ra phần tử nhỏ thứ k của dãy số.
Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.
For example:
Input
5 2
3 4 2 1 4
Result
2

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm chia để trị để tìm phần tử nhỏ thứ k
int findKthSmallest(vector<int>& arr, int left, int right, int k) {
    if (left == right) {
        return arr[left];
    }

    int pivotIndex = left + rand() % (right - left + 1); // Chọn một pivot ngẫu nhiên
    swap(arr[pivotIndex], arr[right]);

    // Phân hoạch mảng xung quanh pivot
    int i = left;
    for (int j = left; j < right; j++) {
        if (arr[j] < arr[right]) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);

    // So sánh vị trí của pivot với k
    if (k == i) {
        return arr[i];
    } else if (k < i) {
        return findKthSmallest(arr, left, i - 1, k);
    } else {
        return findKthSmallest(arr, i + 1, right, k);
    }
}

int main() {
    int N, k;
    cin >> N >> k;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (k > 0 && k <= N) {
        int kthSmallest = findKthSmallest(arr, 0, N - 1, k - 1);
        cout << kthSmallest << endl;
    } else {
        cout << "Invalid k value" << endl;
    }

    return 0;
}
