//This program is for implementation of strcmpi function.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str1[20], str2[20];
	int i=0,f1=-1,f2=-1;
//	clrscr();
	printf("Enter 1st String -\n");
	gets(str1);
	printf("Enter 2nd String -\n");
	gets(str2);
	for(;str1[i]!=NULL;i++)
		f1++;
	for(i=0;str2[i]!=NULL;i++)
		f2++;
	if(f1>f2) {
		printf("1st String is Greater ,i.e., ");
		puts(str1);
    }
    else if(f2>f1) {
        printf("2nd String is Greater ,i.e., ");
        puts(str2);
    }
    else
    	printf("Both Strings are equal.");
//	getch();
	return 0;
}
