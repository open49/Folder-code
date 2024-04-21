/*
Cho một dãy số A gồm n số nguyên dương và số nguyên k. Xác định xem có thể chia dãy A thành k dãy con có tổng bằng nhau không.

Đầu vào: Dòng đầu tiên chứa 2 số nguyên n,k, (1≤k≤n≤16. Dòng thứ 2 chứa n số nguyên Ai, (Ai≤10000).

Đầu ra: In ra yes nếu có thể chia dãy A thành k dãy con có tổng bằng nhau và no nếu ngược lại.
Dữ liệu vào nhập từ bàn phím và kết quả được in ra màn hình.
For example:
Input
7 4
4 3 2 3 5 2 1
Result
yes

*/
#include<bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums, vector<int>& visited, int start_index, int k, long long cur_sum, int cur_num, long long target){
    if(k==1) return true;
    if(cur_sum == target && cur_num>0) return canPartition(nums, visited, 0, k-1, 0, 0, target);
    for(size_t i = start_index; i<nums.size(); i++){
        if(!visited[i]){
            visited[i] = 1;
            if(canPartition(nums, visited, i+1, k, cur_sum + nums[i], cur_num++, target)) return true;
            visited[i] = 0;
        }
    }
    return false;
}

bool canPartitionKSubsets(vector<int>& nums, int k) {
    long long sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum % k != 0) return false;
    vector<int> visited(nums.size(), 0);
    return canPartition(nums, visited, 0, k, 0, 0, sum/k);
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    cout << (canPartitionKSubsets(A,k) ? "yes" : "no") << endl;
    return 0;
}
