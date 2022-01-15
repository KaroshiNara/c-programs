//This is a program for Transpose of a Matrix.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar1[3][3],ar2[3][3],i=0,j;
//  clrscr();
    printf("Enter the 9 Numbers for Matrix -\n");
    for(;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&ar1[i][j]);
    printf("The matrix is this -\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d  ",ar1[i][j]);
        printf("\n");
    }
    printf("After Transpose the Matrix has becomed this -\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d  ",ar1[j][i]);
        printf("\n");
    }
//  getch();
    return 0;
}