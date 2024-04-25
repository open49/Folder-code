#include <iostream>
#include <string>
using namespace std;
int main (){
    char xau;
    cin>>xau;
    int countAlpha =0 ;
    int countNumber = 0;
    int countOther =0 ;
    if('a' <= xau && xau <='z'||'A' <= xau && xau <= 'Z'){
        countAlpha++;
    }
    else if('0' <= xau && xau <= '9'){
        countNumber++;
    }
    else{
        countOther++;
    }
    cout<<countAlpha<<" "<<countNumber<<" "<<countOther;
    return 0;
}
