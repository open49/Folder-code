#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int c;
     c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int num1,num2;
    cin>>num1;
    cin>>num2;
    swap(&num1,&num2);
    cout<<num1<<" "<<num2;
}
