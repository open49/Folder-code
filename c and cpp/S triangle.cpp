#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    double s;
    cin>> s;
    s = sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
    if(a<0 || b<0 || c<0 || (a+b)==c || (a+b)<c){
        cout<<"invalid";
    }
    if(a>0 && b>0 && c>0 && (a+b)> c){
        cout<<fixed<<setprecision(2)<<s;
    }
    return 0;
}
