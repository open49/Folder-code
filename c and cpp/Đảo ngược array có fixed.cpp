#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(){
    float A[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<setprecision(2)<<fixed<<A[i]<<" ";
    }
   getch();
   return 0;
}
