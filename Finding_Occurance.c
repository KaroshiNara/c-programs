//This program is for finding the occuance of character 'a' in a String.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[12];
	int i=0,f=0;
//	clrscr();
	printf("Enter your name to check that it contanins 'a' or not ?\n");
	scanf("%s",str);
	for(;str[i]!='\0';i++)
		if(str[i]=='a')
			f++;
	if(f==0)
		printf("Your name does not contain 'a.'");
	else
		printf("Your name contains %d 'a'.",f);
//	getch();
	return 0;
}
