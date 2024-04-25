#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    for(int i = a;i <= b;i++){
        if(sqrt(i)>=sqrt(a) &&sqrt(i)<= sqrt(b)){
            cout<<i<<" ";
        }
    }
    return 0;
}