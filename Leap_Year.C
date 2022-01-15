//This program is for finding the Leap Year.
#include<stdio.h>
//#include<conio.h>
int main() {
    int year;
//  clrscr();
    printf("Enter the Year to check it's Leap or Not ?\n");
    scanf("%d",&year);
    if(year%400==0)
        printf("%d is a Leap Year ;-)",year);
    else if(year%100==0)
        printf("%d is a not Leap Year ;-)",year);
    else if(year%4==0)
        printf("%d is a Leap Year ;-)",year);
    else
        printf("%d is not a Leap year :-|",year);
//  getch();
    return 0;
}