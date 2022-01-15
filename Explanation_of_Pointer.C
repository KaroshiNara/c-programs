//This program is for explanation of Pointer Concept in C.
#include<stdio.h>
//#include<conio.h>
int main() {
    int fir,sec,sum;/* 2- Here we can declare any type of variable whether its a int,
    long int, float,or even unsign character */

    int *p1,*p2;/* 1- Here putting * before the name of variable will going to
    convert it into a Pointer & a pointer will going to store the address of
    that value instead of storing the full value and one of the most important
    thing is that a POINTER WILL ALWAYS BE OF A INTEGER TYPE BECAUSE IT STORES
    THE ADDRESS RATHER THAN STORING ANY TYPE OF VALUE.*/

//  clrscr();
    printf("Enter the 2 values for addition\n");
    scanf("%d%d",&fir,&sec);

    p1=&fir;/* 3- Here '&' is use to tell the compiler that we are storing the
    address of variable name fir. As we know that '&' operator represent the
    address */

    p2=&sec;
    sum=*p1+*p2;/* 4- Here we are telling the compiler that we want to add the
    values which are stored on the address of p1 and p2 because we have already
    stored the address of entered values by the user and other noticable thing
    is that here '*' will not going to act like multiplication because we are
    already using it in pointers but yhea if you want to do multiplication
    then the statement will be like this mul=*p1**p2; */
    printf("Sum = %d",sum);
//  getch();
    return 0;
}