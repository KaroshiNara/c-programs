/This program is an example of Recursive Function.
#include<stdio.h>
//#include<conio.h>
//--------Recursive Function---------
int fact(int value) {
    if(value==0)
        return 0;
    else if(value==1)
        return 1;
    else
        return value*fact(value-1);
}
//---------Main Function----------------
int main() {
    int f,value;
//  clrscr();
    printf("Enter any value\n");
    scanf("%d",&value);
    f=fact(value);
    printf("Factorial = %d",f);
//  getch();
    return 0;
}