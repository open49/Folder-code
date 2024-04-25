#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	
	
char *a,*b;
 
    a = new char[20];
    cout<<"Cau hoi 1: "<<endl;
	cout<<"Hay cho biet nuoc nao la nuoc lon nhat in the world"<<endl;
	cout<<"Dap an cua ban la :   ";
    cin >> a;
 
    b = new char[20];
    cout<<endl;
    cout<<"ban chac la dap an nay chu, cho ban 1 co hoi tra loi lai :  ";
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
            cout<<"ban dung roi"<<endl<<"nhan enter de sang cau hoi tiep theo"<<endl;
        else cout<<"ban sai roi"<<endl<<"nhan enter de sang cau hoi tiep theo"<<endl;
    }
    else cout<<"ban sai roi"<<endl<<"nhan enter de sang cau hoi tiep theo"<<endl;
    
 
    getch();
	
	int c;
	cout<<"Cau hoi 2: "<<endl;;
	cout<<"Hay cho biet 1+1 = ?"<<endl;
	cout<<"Dap an cua ban la :  ";
	cin>>c;
	if(c == 2){
		cout<<"Ban tra loi dung roi "<<endl;
	}
	else{
		cout<<"Ban tra loi sai roi"<<endl;
	}
	return 0;
}
