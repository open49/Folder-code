/*Cho một xâu kí tự chỉ gồm các dấu ngoặc {, }, (, ), [, ].  Một xâu kí tự được định nghĩa là hợp lệ như sau: 

Một xâu rỗng là một xâu hợp lệ.
Nếu xâu A là một xâu hợp lệ thì các xâu (A), {A}, [A] cũng là các xâu hợp lệ.
Nếu xâu A và B là xâu hợp lệ thì xâu AB cũng là xâu hợp lệ.
Bạn hãy viết chương trình kiểm tra xem một xâu kí tự có hợp lệ hay không.
Đầu vào
Dữ liệu vào gồm nhiều dòng từ bàn phím:
-Dòng đầu tiên chứa số nguyên T là số lượng xâu kí tự cần kiểm tra. 
-T dòng tiếp theo, mỗi dòng chứa một xâu kí tự cần kiểm tra (T≤10, độ dài xâu không vượt quá 10^4)
Đầu ra
Với mỗi xâu kí tự, in ra  màn hình yes nếu đó là xâu hợp lệ,  in ra no nếu ngược lại .
For example:
Input:
2
{()[]}
([)]
Result:
yes
no
*/
#include <iostream>
#include <stack>
#include <string>

bool isValid(std::string s) {
    std::stack<char> stack;
    for (char& c : s) {
        switch (c) {
            case '{':
            case '(':
            case '[': stack.push(c); break;
            case '}': if (stack.empty() || stack.top()!='{') return false; else stack.pop(); break;
            case ')': if (stack.empty() || stack.top()!='(') return false; else stack.pop(); break;
            case ']': if (stack.empty() || stack.top()!='[') return false; else stack.pop(); break;
            default: ; // pass
        }
    }
    return stack.empty();
}

int main() {
    int T;
    std::cin >> T;
    for(int i = 0; i < T; i++) {
        std::string s;
        std::cin >> s;
        if(isValid(s)) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
    return 0;
}
