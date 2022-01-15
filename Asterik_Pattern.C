/* *****
    ****
     ***
      **
       * This program is for printing this Pattern. */
#include<stdio.h>
//#include<conio.h>
int main() {
    int i,j,k;
//  clrscr();
    for(i=1;i<6;i++) {
        for(j=1;j<=i;j++)
            printf(" ");
    for(k=5;k>=i;k--)
        printf("*");
    printf("\n");
    }
//  getch();
    return 0;
}