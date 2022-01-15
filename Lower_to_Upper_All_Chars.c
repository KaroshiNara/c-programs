//This program is for converting the Lower Case into Upper Case.
#include<stdio.h>
//#include<conio.h>
int main() {
	char lower[20];
	int i=0;
//	clrscr();
	printf("Enter your Name in Lower Case (Small Letters) -\n");
	gets(lower);
	for(;lower[i]!=NULL;i++) {
		if (lower[i]==' ')
			continue;
		else
			lower[i]=lower[i]-32;
	}
	printf("Your Name in Upper is -\n");
	puts(lower);
//	getch();
	return 0;
}
