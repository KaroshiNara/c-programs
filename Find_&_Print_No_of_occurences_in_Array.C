// This program is for serching a number and printing that how many times it occured in the complete array.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[5],i=0,ser,f=0;
//  clrscr();
    printf("Enter 5 numbers -\n");
     for(;i<5;i++)
        scanf("%d",&ar[i]);
    printf("Enter the number for search -\n");
    scanf("%d",&ser);
// for scanning and printing--------------------------------------------------
    for(i=0;i<5;i++)
        if(ser==ar[i])
            f++;
    if(f==0)
        printf("%d have not occured even once.",ser);
    else if(f==1)
    printf("%d have occured %d time.",ser,f);
    else
    printf("%d have occured %d times.",ser,f);
//  getch();
    return 0;
}