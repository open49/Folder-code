#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
bool kiemtrachinhphuong(int a, int b){
	return sqrt(float(b)) == (int)sqrt((float)b);

}
void lietkechinhphuong (int a , int b){
	for (int i = a; i<= b; i++){
		if(kiemtrachinhphuong(i) == true)
		cout<<i ; " ";
	}
}
int main (){
	int a, b ;
	cin>>a>>b;
	lietkechinhphuong(b);
	getch;
	return 0;
}
