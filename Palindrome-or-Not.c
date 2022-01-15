//This program is for checking Palindrome String or Not.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[20];
	int i=0,f=0,j,a;
//	clrscr();
	printf("Enter the Name to check its Palindrome or Not -\n");
	gets(str);
	for(;str[i]!=NULL;i++)
		f++;
	a=f/2;
	j=f;
	f=0;
	for(i=0;i<a;i++) {
		j--;
		if(str[i]==str[j])
		    f++;
	}
	if(f==a)
		printf("The name is Palindrome");
	else
		printf("The name is Not-Palindrome");
//	getch();
	return 0;
}
