#include<iostream>
#include<iomanip>
using namespace std ;
int main(){
    int n ,j;
    int a[100], temp ;
    cin>> n ;
    for (int i=0;i<n;i++){
        cin>> a[i] ;
    }
    for(int i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        if(a[i]>a[j]){
        temp = a[i] ;
        a[i]=a[j];
        a[j] =temp ;
        }
    }
    for (int i=0;i<n;i++){
        if(a[i+1]!= a[i]) 
		cout<< a[i]<<" "  ;
    }
}

