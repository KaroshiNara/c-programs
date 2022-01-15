//This Program is for replacing the elements in an array with their sum.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[5],i=0,rem,rev=0,value,sum;
//  clrscr();
    printf("Enter 5 numbers -\n");
    for(;i<5;i++)
        scanf("%d",&ar[i]);
//for changing the values
    for(i=0;i<5;i++) {
        sum=0;
        value=ar[i];
        while(value!=0) {
            rem=value%10;
            sum=sum+rem;
            rev=rev*10+rem;
            value=value/10;
        }
        ar[i]=sum;
    }
    for(i=0;i<5;i++)
        printf("Binary place = %d  Value = %d\n",i,ar[i]);
//  getch();
    return 0;
}