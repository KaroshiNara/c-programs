//This is a program for Addition of 2 2-D Arrays.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar1[3][3],ar2[3][3],i=0,j;
//  clrscr();
    printf("Enter 9 Numbers for 1st Array -\n");
    for(;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&ar1[i][j]);
    printf("\nEnter 9 Numbers for 2nd Array -\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&ar2[i][j]);
    printf("/nAddition -\n\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            printf("%d\t+\t%d\t=\t%d\n",ar1[i][j],ar2[i][j],ar1[i][j]+ar2[i][j]);
//  getch();
    return 0;
}