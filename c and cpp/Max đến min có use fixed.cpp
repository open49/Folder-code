#include <iostream>
#include <iomanip>
using namespace std;
int main()
{    
    double a[50];
    int i,n,tg,max,j,s=0; 
    cin>>n;
    for(i=0;i<n;i++)
    {        
      cin>>a[i];
    }
    for(i=0;i<n-1;i++)
       for(j=i+1; j<n; j++)
       {
        if(a[i]<a[j])
          {
            tg=a[i];
             a[i]=a[j];
              a[j]=tg;
           } 
       }
       for(i=0;i<n;i++)
       {
          cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }

}


