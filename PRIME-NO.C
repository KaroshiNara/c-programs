//This program is for checking the entered number is prime or not.
#include<stdio.h>
//#include<conio.h>
int main() {
    int i=2,value;
//  clrscr();
    printf("Enter the value ");
    scanf("%d",&value);
    while(value>i) {
        if(value%i==0) {
            printf("The Entered value is Non-Prime");
            break;
        }
        i++;
    }
    if(i==value)
        printf("The Entered value is Prime");
//  getch();
    return 0;
}