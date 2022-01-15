//This program is of Factorial
#include<stdio.h>
//#include<conio.h>
int main() {
//  clrscr();
    float i,value,final=1;
    printf("Enter the value to get Factorial = ");
    scanf("%f",&value);
    for (i=1;i<=value;i++)
        final=final*i;
    printf("%f",final);
//  getch();
    return 0;
}