//This is program for doing sum of N Numbers.
#include<stdio.h>
//#include<conio.h>
int main() {
    int i=0,sum=0,value,num;
//  clrscr();
    printf("Enter the total number of Numbers whose sum you want to do\n");
    scanf("%d",&num);
    printf("Start Entering the Numbers - ");
    for(i=1;i<=num;i++) {
    scanf("%d",&value);
    sum = sum + value;
    }
    printf("Sum = %d",sum);
//  getch();
    return 0;
}