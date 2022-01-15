//This program is for comparing 3 Numbers-------------------
#include<stdio.h>
//#include<conio.h>
int main() {
    int a,b,c;
//  clrscr();
    printf("Enter any 3 Digits");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b) {
        if(a>c)
        {
            printf("%d", a);
            printf(" is Greatest.");
        }
        else
        {
            printf("%d",c);
            printf(" is Greatest.");
        }
    }
    else {
        if(b>c) {
            printf("%d",b);
            printf(" is the Greatest.");
        }
        else {
            printf("%d",c);
            printf(" is the Greatest.");
        }
    }
//  getch();
    return 0;
}