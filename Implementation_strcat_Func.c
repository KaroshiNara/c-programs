//This program is for implementation of strcat function.
#include<stdio.h>
//#include<conio.h>
int main() {
	char name[25],last[10];
	int i=0,f=0,l=0;
//	clrscr();
	printf("Enter your 1st Name -\n");
	gets(name);
	printf("Enter your Last Name -\n");
	gets(last);
	for(;last[i]!=NULL;i++)
		l=i;
	for(i=0;name[i]!=NULL;i++)
		f++;
	i=f;
	if((25-l)>(25-f)) {
		for(f=0;last[f]!=NULL;f++) {
			name[i]=last[f];
			i++;
		}
		name[i++]='\0';
		puts(name);
	}
	else
		printf("Not enough space available.");
//	getch();
	return 0;
}
