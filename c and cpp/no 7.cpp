
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){


char *a,*b;
 
    a = new char[20];
    cout<<"Cau hoi 2: "<<endl;
	cout<<"Hay cho biet nuoc nao la nuoc lon nhat in the world"<<endl;
	cout<<"Dap an cua ban la :   ";
    cin >> a;
 
    b = new char[20];
    cin>>b;
 
    int l1 = strlen(a);
    int l2 = strlen(b);
   
    if(l1==l2)
    {
        int check=0;
        for (int i=0;i<l1;i++)
        {
            if(a[i]==b[i])
                check = 1;
            else check = 0;
        }
        if (check==1)
            cout<<"ban dung roi";
        else cout<<"ban sai roi";
    }
    else cout<<"ban sai roi";
 
    getch();
    return 0;
}
