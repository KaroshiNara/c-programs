//This is program for adding all the elements of a row in an 2-D Array
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[3][3],i=0,j;
//    clrscr();
    printf("Enter 9 Numbers for sum -\n");
    for(;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&ar[i][j]);
    for(i=0;i<3;i++) {
        int sum=0;
        for(j=0;j<3;j++)
            sum=sum+ar[i][j];
        printf("Sum of Row %d is %d.\n",i+1,sum);
    }
//  getch();
    return 0;
}