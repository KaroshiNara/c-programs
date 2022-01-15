//This program is to explain how the Returning of value Works----------
#include<stdio.h>
//#include<conio.h>
int Sum(int a,int b)//1-While declaring function, we can use Capital letters
{
    int add;//3-Here I have taken add variable for storing the value of adding.
    add=a+b;
    return(add);/*5-Here return will going to return the calculated value ,i.e.,
    add to the void main*/
}
int main() {
    int a,b,add;
//  clrscr();
    printf("Enter 1st value ");
    scanf("%d",&a);
    printf("Enter 2nd value ");
    scanf("%d",&b);
    add=Sum(a,b);//2-We have declared Sum in capital so we must use capital here.
    /*4-Here add is equal to the user-declared function (which i have delcared).
    from here onwards the program will go to the user-declared function for
    further processing */
    printf("%d",add);
//  getch();
//  return 0;
}