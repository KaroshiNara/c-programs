//This program is for checking Perfect Number.
#include<stdio.h>
//#include<conio.h>
int main() {
    int i,value,rem,sum=0;
//  clrscr();
    printf("Enter any Number -\n");
    scanf("%d",&value);
    for(i=1;i<value;i++) {
        rem=value%i;
        if(rem==0)
            sum=sum+i;
    }
    if(sum==value)
        printf("%d is a Perfect Number ;-)",value);
    else
        printf("%d is not a Perfect Number :-(",value);
//  getch();
    return 0;
}