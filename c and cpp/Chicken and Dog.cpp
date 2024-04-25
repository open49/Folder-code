#include<iostream>
using namespace std ;
int main(){
    bool flag =false ;
    int total, totallegs;
    cin>> total>>totallegs ;
    for (int i = 0;i<total;i++){
        for(int j=0;j<total;j++){
            if(2*i+4*j==totallegs&& i+j== total) {
            flag = true ;
            cout <<"chicken = "<<i<<", dog = "<<j ;
            }
        }
    }
if(flag==false) cout << "invalid" ; 
    
}
