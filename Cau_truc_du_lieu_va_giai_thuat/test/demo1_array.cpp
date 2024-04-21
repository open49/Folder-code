#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    int b[5];// = {0};
    for(int i = 0 ; i < 5 ; i++){
        cout<<b[i]<<" ";
        
    }
    cout<<endl;

    int c[] = {1,5,3,2,4,4,5};
    int n = sizeof(c)/sizeof(int);
    for(int i = 0 ; i < n ; i++){
        cout<<c[i]<<" ";
        
    }
    cout<<endl;
    int *d = new int[10];
    n = 10;
    memset(d, 0,sizeof(int)* 10);
    //Nếu muốn gán hết bằng 0 thì mới dùng memset
    // nếu muốn gán bằng 1 phải sử dụng vòng lặp for từ 0 đến n 
    for(int i = 0 ; i < n ; i++){ 
        d[i] = 1;        
    }

    for(int i = 0 ; i < n ; i++){
        cout<<d[i]<<" ";
        
    }
//vector chỉ sd tỏng c++
//     vector<int> a;// khai báo mảng a kieru số nguyên có thể thay int thành kiểu mảng mình muốn sd vd: double, string 
// vector<int> a(5,0); // khơi tạo 5 phần tử bằng 0
// int n = a.size();
// a.push_back(10); // thêm phần tử vào cuối phần tử của mảng 


cout<<endl;

vector<int> v(5,0);
//v. size : kich thuoc cua mang
v.push_back(10);//thêm 1 phàn tử số 10 vào cuối mảng mà k cần phải sửa code
v.clear(); // xóa sạch các phần tử
v.resize(10,1);//resize10 phần tử với các giá trị bằng 1
for (size_t i = 0; i < v.size(); i++)
{
    /* code */
    cout<<v[i]<<" ";
}//vector sử dụng giống hệt mảng

    return 0;

}