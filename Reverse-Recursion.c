//This program is of Reversing of Number using Recursion
#include<stdio.h>
//#include<conio.h>
int main() {
	static int value,rem,rev;
//	clrscr();
	printf("Enter any number -\n");
	scanf("%d",&value);
	start:
	if(value!=0) {
        rem=value%10;
		rev=rev*10+rem;
		value=value/10;
		goto start;
	}
	printf("Reverse = %d",rev);
//	getch();
	return 0;
}
