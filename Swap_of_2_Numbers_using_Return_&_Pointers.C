//Swap program using return() function on Address bases ;-)
#include<stdio.h>
//#include<conio.h>
int swap1(int *add1) {
 return(*add1);
}

int swap2(int *add2) {
 return(*add2);
}

int main() {
    int fir,sec;
    int *add1, *add2;
//  clrscr();
    printf("Enter 1st value  ");
    scanf("%d",&fir);
    add1=&fir;
    printf("Enter 2nd value  ");
    scanf("%d",&sec);
    add2=&sec;
    swap2(add2);
    printf("Now the 1st Value has become %d\n",*add2);
    swap1(add1);
    printf("Now the 2nd Value has become %d",*add1);
//  getch();
    return 0;
}