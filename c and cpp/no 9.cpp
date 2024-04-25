#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b, T c, T d) { 
    T max = a; 
    if (b > max) max = b; 
    if (c > max) max = c; 
    if (d > max) max = d;
    return max; 
}
int main(){
	float a, b , c, d, max ;
	cin>>a>>b>>c>>d;
	max = a;
	if (b>max){
		cout<<b<<" ";
	}
	if(c>max ){
		cout<<c<<" ";
	}
	if(d>max){
		cout<<d<<" ";
	}
	return 0;
	
}
