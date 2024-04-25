#include <iostream>

using namespace std;
int getmaxValue (int* p , int n){
	int maxValue =p[0];
	for (int i=0; i<n;i++){
		if(p[i]>maxValue){
			maxValue = p[i];
		}
	}
	return maxValue;
}
int main (){
	int n;
	int arr[100];
	cin>>n;
	for(int i = 0; i<n ; i++){
		cin>> arr[i];
	}
	cout<<"max value = "<<getmaxValue(&arr[0], n);
	//getmaxValue(&arr[0], n) == getmaxValue(arr, n) dung cai nao cung duoc
	return 0;
}
