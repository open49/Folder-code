#include <iostream>
using namespace std;
int main() {
   char s1[100];
   char s2[100];
   int length = 0;
   int i = 0;
   while(s1[length] != '\0') {
      length++;
   }
cout<<s1<<endl;
   for(i = --length; i>=0; i--)
   cin>>s1[i];
      cout<<s1[i];
   i = 0;
   while(length >= 0) {
      s2[length] = s1[i];
      length--;
      i++;
   }
   s1[i] = '\0';
cout<<endl<<s2;
   return 0;
}
