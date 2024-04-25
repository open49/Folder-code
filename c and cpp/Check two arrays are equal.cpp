#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
  int a[1000];
  int b[1000];
  int n,temp,e,d,j,ahihi;
  int sum=0;
  cin>>n;
  int i;
  for(i=0;i<n;i++){

        cin>>a[i];
        }
  for(i=0;i<n-1;i=i+1){
        for(j=i+1;j<n;j=j+1){
           if (a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
            }
			}
			}
  for(d=0;d<n;d++){

        cin>>b[d];
        }
  for(d=0;d<n-1;d++){
        for(e=d+1;e<n;e++){
           if (b[d]>b[e]){
			ahihi=b[d];
			b[d]=b[e];
			b[e]=ahihi;
            }
        }
}
  		if(a[i]==b[d])
  			cout<<"yes";
	  else
	  	cout<<"no";

  return 0;
}
