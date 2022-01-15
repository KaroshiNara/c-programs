//This program is for calculating the Exponential Power.
#include<stdio.h>
//#include<conio.h>
int main() {
    int fir, sec,i,a;
//  clrscr();
    printf("Enter the Base Number ");
    scanf("%d",&fir);
    printf("Enter its Power ");
    scanf("%d",&sec);
    a=fir;
    for(i=1;i<sec;i++)
        fir=fir*a;
    printf("Answer is %d",fir);
//  getch();
    return 0;
}