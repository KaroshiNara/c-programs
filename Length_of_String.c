//This program is for finding the length of the string.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[12];
	int i=0,f=0;
//	clrscr();
	printf("Enter your Name to know that how many alphabets it contain -\n");
	scanf("%s",&str);
	for(;str[i]!='\0';i++)
		f++;
	printf("Your Name contins %d characters.",f);
//	getch();
	return 0;
}
