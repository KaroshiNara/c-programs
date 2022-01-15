//This program is for printing Factors ;-)
#include<stdio.h>
//#include<conio.h>
int main() {
    int value,i=2,rem,qut;
//  clrscr();
    printf("Enter the Value  ");
    scanf("%d",&value);
    qut=value;
    printf("1");
    out:
    while(i!=value) {
        rem=qut%i;
        if(rem==0) {
            printf("*%d",i);
            qut=qut/i;
            goto out;
        }
        i++;
    }
    printf("= %d",value);
//  getch();
    return 0;
}