#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> numbers(N);
    for(int i=0; i<N; i++)
        std::cin >> numbers[i];

    std::sort(numbers.begin(), numbers.end());

    for(int i=0; i<N; i++)
        std::cout << numbers[i] << " ";

    return 0;
}
/*Cho một dãy gồm N số nguyên dương, bạn hãy viết chương trình sắp xếp các số trên theo thứ tự tăng dần. Tức là, số đứng trước nhỏ hơn hoặc bằng số đứng sau.

Đầu vào
Dữ liệu vào từ bàn phìm gồm hai dòng. Dòng đầu tiên chứa số nguyên 
N 
(N≤10^5) .Dòng tiếp theo chứa N số nguyên của dãy số, hai số cách nhau bởi một dấu cách.

Đầu ra
In ra màn hình dãy số sau khi đã sắp xếp tăng dần, các số phân tách nhau bởi một dấu cách.


For example:

Test	Input	Result
Test case 1
5
2 4 1 3 4
1 2 3 4 4
*/