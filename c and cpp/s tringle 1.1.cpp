#include <iostream>
#include <cmath>
using namespace std;
int main (){
int a,b,c,d;
cin>>a>>b>>c;
d= (a+b+c)/2;
cout<<" Dien tich tam giac la :\t";

cout <<sqrt(d*(d-a)*(d-b)*(d-c));
return 0;
}
