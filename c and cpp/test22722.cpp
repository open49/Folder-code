#include <cstdlib>
#include <iostream>
using namespace std;
double avg(int arr[],int size){ //khong xac dinh kich co mang giua hai dau [ va ]
    int sum=0;
    double r;
    for(int i=0;i<size;i++)
        sum+=arr[i];
    r=(double)sum/size;
    return(r);
}
int main(){
   int n;
   cout<<"Nhap so cac so nguyen:";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cout<<"Gia tri "<<i+1<<": ";
       cin>>arr[i];
   }

cout<<"Gia tri trung binh="<<avg(arr,n)<<endl; //chi dat ten cho mang khi ham duoc goi
return 0;
}