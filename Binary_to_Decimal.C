//This program is for converting Binary Number to Decimal.
#include<stdio.h>
//#include<conio.h>
int main() {
    int a,rem,b=0,base=1;
//    clrscr();
    printf("Enter the value  ");
    scanf("%d",&a);
        while(a>0) {
            rem=a%10;
            b=b+rem*base;
            a=a/10;
            base=base*2;
        }
    printf(" Decimal Number =%d",b);
//    getch();
    return 0;
}