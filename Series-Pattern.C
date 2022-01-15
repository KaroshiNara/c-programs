//This program is for printing value in a pattern.
#include<stdio.h>
//#include<conio.h>
int main() {
    int i,j,value,a=0;
//  clrscr();
    printf("Enter the value for pattern ");
    scanf("%d",&value);
    for(i=1;i<value;i++) {
        for(j=1;j<=i;j++) {
            if(j==value) {
                printf("\t%d",j);
                goto out;
            }
            else
                printf("\t%d",j);
        }
        printf("\n");
    }
    out:
//  getch();
    return 0;
}