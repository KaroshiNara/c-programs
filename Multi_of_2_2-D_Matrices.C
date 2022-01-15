//This is a program for Multiplication of 2 2-D Arrays.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar1[3][3],ar2[3][3],i=0,j;
//  clrscr();
    printf("Enter 9 Numbers -\n");
    for(;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&ar1[i][j]);
    printf("Enter 9 Numbers again for Multiplication -\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&ar2[i][j]);
//------For Multiplication--------------
//  clrscr();
    printf("Multiplication -\n\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d\t",(ar1[i][j]*ar2[j][i])+(ar1[i][j]*ar2[j][i])+(ar1[i][j]*ar2[j][i]));
        printf("\n\n");
    }
//  getch();
    return 0;
}