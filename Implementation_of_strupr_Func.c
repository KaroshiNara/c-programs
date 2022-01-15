//This program is for implementation of strupr() function.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[150];
    int i=0;
//	clrscr();
    printf("Enter sentance in any type of Case -\n");
    gets(str);
    for(;str[i]!=NULL;i++)
    	if(str[i]>96 && str[i]<123)
    		str[i]=str[i]-32;
	printf("The sentance in Upper Case is -\n");
	puts(str);
//	getch();
	return 0;
}
