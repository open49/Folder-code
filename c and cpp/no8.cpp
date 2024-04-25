#include <iostream>
using namespace std;
int getMaxValue (int* p,int n){
	int maxValue = p[0];
	for(int i= 0 ; i <n; i++){
		if(p[i] > maxValue ){
			maxValue = p[i];
		}
	}
	return maxValue;
}
int main (){
	int n ; 
	int arr[100];
	cin>>n;
	for(int i= 0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Max value = "<<getMaxValue(&arr[0], n);
	return 0;
}
