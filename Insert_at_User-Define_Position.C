//This program is for inserting a value at a user defined position.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[5],i=0,pos,value;
//  clrscr();
    printf("Enter 4 numbers -\n");
    for(;i<4;i++)
        scanf("%d",&ar[i]);
//For Position----------------------------------------------------------------
    printf("Enter the Position for Insertion of Number -\n");
    scanf("%d",&pos);
    for(i=5;i>0;i--) {
        if(i==pos-1)
            break;
        else
            ar[i]=ar[i-1];
    }
//For entering number at that place-------------------------------------------
    printf("Enter the Number -\n");
    scanf("%d",&ar[i]);
//For printing the final output-----------------------------------------------
    printf("Now,the value array becomed -\n");
    for(i=0;i<5;i++)
        printf("%d\n",ar[i]);
//  getch();
    return 0;
}