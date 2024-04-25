#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    double  f[n],g[n],c,sum=0;
    for(int i=1;i<=n;i++)
    {
        cin >> f[i]; 
    }
        for(int i=1;i<=n;i++)
    {
        cin >> g[i]; 
    }
    for(int i=1;i<=n;i++)
    {
        c=f[i]*g[i];
        sum+=c;
    }
    
    cout << fixed << setprecision(2) << sum;
    
}
