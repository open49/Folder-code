#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int array[1000];
    for (int k = 0; k < n/2; k++) {
        cin>>array[k];
    }
    for (int k = 0; k < n/2; k++) {
    if ( array[k] == array[n-1-k] ){
        cout<<"Symmetric array.";
    } else {
        cout<<"Asymmetric array.";
    }
}
return 0;
}
