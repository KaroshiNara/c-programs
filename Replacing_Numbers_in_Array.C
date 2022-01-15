//This program is for replacing all the odd and even placed elements with user entered.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[5],i=0,even,odd;
//  clrscr();
    printf("Enter 5 numbers -\n");
    for(;i<5;i++)
        scanf("%d",&ar[i]);
    printf("Enter the number for replacing all the Even places in Array -\n");
    scanf("%d",&even);
    printf("Enter the number for replacing all the Odd places in Array -\n");
    scanf("%d",&odd);
//for replacing---------------------------------------------------------------
    for(i=0;i<5;i++)
    {
        if(i%2==0)
            ar[i]=even;
        else
            ar[i]=odd;
    }
    for(i=0;i<5;i++)
        printf("Binary Place = %d | Value = %d\n",i,ar[i]);
//  getch();
    return 0;
}