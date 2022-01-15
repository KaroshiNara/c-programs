//This Program is for implementation of strlwr() function.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[50];
    int i=0;
//	clrscr();
    printf("Enter sentance in any type of Case -\n");
    gets(str);
    for(;str[i]!=NULL;i++)
    	if(str[i]>64 && str[i]<91)
    		str[i]=str[i]+32;
	printf("The sentance in Lower Case is -\n");
	puts(str);
//	getch();
	return 0;
}
