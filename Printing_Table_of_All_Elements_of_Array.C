//This program is for printing the table of each element entered in an array.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[5],i=0,j,till;
//  clrscr();
    printf("Enter the 5 Numbers -\n");
    for(;i<5;i++)
        scanf("%d",&ar[i]);
//For printing table--------------------------------------------------------
    printf("Enter the number till you want the table -\n");
    scanf("%d",&till);
    for(i=0;i<5;i++)
        for(j=1;j<=till;j++)
            printf("\t%d * %d = %d\n",ar[i],j,ar[i]*j);
//  getch();
    return 0;
}