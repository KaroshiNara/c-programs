//This is a program to convert the whole string into Upper Case.
#include<stdio.h>
//#include<conio.h>
int main() {
    char str[30];
    int i=0;
//	clrscr();
    printf("Enter your name in any type of Case -\n");
    gets(str);
    for(;str[i]!=NULL;i++) {
    	if(str[i]==' ' || str[i]<91)
    		continue;
		else
			str[i]=str[i]-32;
	}
	printf("Your Name in Upper Case is -\n");
	puts(str);
//	getch();
	return 0;
}
