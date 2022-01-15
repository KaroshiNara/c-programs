//This program is for printing a String in Reverse Order.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[25], rev[25];
	int i=0,f=-1;
//	clrscr();
	printf("Enter you Name -\n");
    gets(str);
	for(;str[i]!='\0';i++)
		f++;
	i=0;
	for(f;f>=0;f--) {
		rev[i]=str[f];
		i++;
	}
	rev[i]=NULL;
	printf("Now your name is reversed :-\n");
	puts(rev);
//	getch();
	return 0;
}

