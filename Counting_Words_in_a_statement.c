//This program is for counting the words in any statement.
#include<stdio.h>
//#include<conio.h>
int main() {
//	clrscr();
	char str[40];
	int i=0,f=0;
	printf("Enter the sentance -\n ");
	gets(str);
	for(;str[i]!=NULL;i++) {
		if(str[i]==' ')
			continue;
		else
			f++;
	}
	printf("The sentance contain %d words.",f);
//	getch();
	return 0;
}
