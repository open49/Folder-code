 #include <iostream>
 using namespace std;
 int main (){
     int n ;
     cin>>n;
 int temp;
    for(int x = -n; x <= n; x++){
        for(int y = -n; y <= n; y++){
            temp = x;
            if (y >= -(n + temp) && y <= n + temp){
                cout<<"8 ";
            }else{
                cout<<"/ ";
            }
        }
        cout<<endl;
    }
    for(int x = -n; x <= n; x++){
        for(int y = -n; y <= n; y++){
            temp = x;
            if (y >= -(n + temp) && y <= n + temp){
                cout<<"/ ";
            }else{
                cout<<"8 ";
            }
        }
        cout<<endl;
    }
}
