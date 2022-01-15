//This program is for printing Numbers in a particular pattern.
#include<stdio.h>
//#include<conio.h>
int main() {
     int i,j,value,a=0;
//  clrscr();
    printf("Enter the the number till you want a pattern\n");
    scanf("%d",&value);
    for(i=1;i<value;i++) {
        for(j=1;j<=i;j++) {
            a=a+1;
            if(a==value) {
                printf("\t%d",a);
                goto out;
            }
            else
                printf("\t%d",a);
        }
        printf("\n");
    }
 out:
//  getch();
    return 0;
}