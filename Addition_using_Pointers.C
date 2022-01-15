//This program is for the explanation of Pointers. 
#include<stdio.h>
//#include<conio.h>
int main() {
    int a,b;
    int *fir,*sec;
//  clrscr();
    printf("Enter 2 numbers -\n");
    scanf("%d%d",&a,&b);
    fir=&a;// ---------1
    sec=&b;// ---------2
    printf("Product = %u\n",*fir**sec);/* Here we have used %u because it stores
    an address which can be very long do we use it as it is used to represent
    unsinged char. which has largest value and it is also fixed to use it to
    print output */

    printf("Addresses = %u  %u\n",fir,sec);/* It will going to print the address
    of fir & sec because in --1 & --2 we have stored the address of a & b,resp.*/

    printf("Values = %u  %u",*fir,*sec);/* On-the-otherhand in this it will going
    to print the values of fir & sec entered by the user because we have putted
    '*' before the fir & sec which will going to tell the compiler to print the
    value stored at that address instead of printing the address */

//  getch();
    return 0;
}