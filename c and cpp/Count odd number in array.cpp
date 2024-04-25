#include <iostream>
using namespace std;
int countoddnumberinarray(int arr[1000], int n ){
	int count = 0;
	for(int i =0;i< n ;i++){
		
		if(arr[i]%2==1){
			count ++;
		}
	}
	return count;
}
int main (){
	int n ;
	int arr[1000];
	cin>>n ;
	for (int i = 0 ; i<n ; i++){
		cin >>arr[i];
	}
	cout<<countoddnumberinarray(arr,n);
	return 0 ;
}
