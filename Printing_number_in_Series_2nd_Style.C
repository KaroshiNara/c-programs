//This program is for printing numbers in a series upto user entered number.
#include<stdio.h>
//#include<conio.h>
int main() {
    int i,j,value,a=0;
//  clrscr();
    printf("Enter the number till you want the series\n");
    scanf("%d",&value);
    for(i=1;i<value;i++) {
        for(j=1;j<=i&&j<11;j++) {
            a=a+1;
            if(a==value) {
                printf("%d ",a);
                goto out;
            }
            else
                printf("%d ",a);
        }
        for(j=1;j<=i;j++) {
            a=a+1;
            if(a==value) {
                printf("%d ",a);
                goto out;
            }
            else
                printf("%d ",a);
        }
        printf("\n");
    }
    out:
//  getch();
    return 0;
}