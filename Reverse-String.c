//This program is for printing a String in Reverse Order.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[12];
	int i=0,f=-1;
//	clrscr();
	printf("Enter you Name -\n");
	scanf("%s",str);
	for(;str[i]!='\0';i++)
		f++;
	printf("Your Name in reverse order is -\n");
	for(f;f>=0;f--)
		printf("%c",str[f]);
//	getch();
	return 0;
}
