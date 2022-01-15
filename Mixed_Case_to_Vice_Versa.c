//This program is for converting the Mixed Cases into its Vice-Versa.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[30];
    int i=0;
//	clrscr();
    printf("Enter your Name in any type of Case -\n");
    gets(str);
    for(;str[i]!=NULL;i++) {
    	if(str[i]==' ')
    		continue;
		else if (str[i]>91)
			str[i]=str[i]-32;
		else 
			str[i]=str[i]+32;
	}
	printf("Your Name in Vice-Versa Case is -\n");
	puts(str);
//	getch();
	return 0;
}
