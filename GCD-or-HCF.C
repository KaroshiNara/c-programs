//This program is for calculating GCD or HCF ;-)
#include<stdio.h>
//#include<conio.h>
int main() {
//  clrscr();
    int fir,sec,i,gcd;
    printf("Enter the 1st Value ");
    scanf("%d",&fir);
    printf("Enter the 2nd Value ");
    scanf("%d",&sec);
    for(i=1;i<=fir && i<=sec;i++)
        if(fir%i==0 && sec%i==0)
            gcd=i;
    printf("The GCD of %d and %d is %d",fir,sec,gcd);
//  getch();
    return 0;
}