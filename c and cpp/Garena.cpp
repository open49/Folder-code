#include <iostream>
#include <string.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	for (int i = 0 ;i <s.size(); i++){
		if((s.size()<15) && (s.size()>6)){
		if('a'<= s[i]&& s[i]<= 'z' || 'A'<=s[i] && s[i]<='Z' || '0'<=s[i] && s[i]<='9'){
			if('a'<= s[0]&& s[0]<= 'z' || 'A'<=s[0] && s[0]<='Z' ){
				cout<<"Valid username.";
			}
		}
	}
		else{
			cout<<"Invalid username.";
		}
	}
	return 0;
}
