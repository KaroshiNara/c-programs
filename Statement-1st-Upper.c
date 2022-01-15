//This program is for converting the 1st character into the Upper Case.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[40];
	int i=0,j;
//	clrscr();
	printf("Enter a line -\n");
	gets(str);
	for(;str[i]!=NULL;i++) {
		if(i==0)
			if(str[i]>91)
				str[i]=str[i]-32;
		else if(str[i]==32) {
			j=i+1;
			if(str[j]>91)
			    str[j]=str[j]-32;
		}
		else
			continue;
	}
	printf("The Final Output is -\n");
	puts(str);
//	getch();
	return 0;
}
