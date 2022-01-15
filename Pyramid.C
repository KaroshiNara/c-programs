//This program is for printing Pyramid.
#include<stdio.h>
//#include<conio.h>
int main() {
    int i,j,k,rows,count;
    long x;
//  clrscr();
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    count=rows-1;
    for(i=0;i<rows;i++) {
        x=1;
        for(k=0;k<=count;k++)
            printf("   ");
        for(j=0;j<=i;j++) {
            printf("%6ld",x);
            x=(x*(i-j)/(j+1));
        }
        count--;
        printf("\n");
    }
//  getch();
    return 0;
}