//This program is for implementation of strrev() function.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[50],rev[50];
	int i=0,j,f=0;
//	clrscr();
	printf("Enter the statement -\n");
	gets(str);
	for(;str[i]!=NULL;i++)
		f++;
	for(i=0;i<=f;i++) {
		rev[i]=str[f];
		f--;
	}
	printf("Now the complete statement is reversed -\n");
	puts(rev);
//	getch();
	return 0;
}
