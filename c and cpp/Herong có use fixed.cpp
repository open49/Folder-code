#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    double s,p;
    cin>>s>>p;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    if(a>0 &&b>0&&c>0&&(a+b)>c){
    cout<<fixed<<setprecision(2)<<s;
    }
    else{
        cout<<"invalid";
    }
    return 0;
}
