#include <conio.h>
#include <stdio.h>
int main(){
	char mangkitu[]="";
	printf("nhap chuoi: ");
	gets(mangkitu);
	if(mangkitu=="dnh")
		printf("YES");
	else
		printf("NO");
	getch();
	return 0;
}
