//This is a program for inserting  a number at appropiate position in a sorted array.
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[5],i=0,j=5,value,oth=0;
//  clrscr();
    printf("Enter the 4 numbers in ascending order -\n");
    for(;i<4;i++)
        scanf("%d",&ar[i]);
    printf("Enter the value for Insertion -\n");
    scanf("%d",&value);
//For Inserting Value---------------------------------------------------------
    for(i=0;i<4;i++)
        if(ar[i]<value)
            oth=i+1;
    for(i=4;i<5;i--) {
        if(i==oth)
        {
            ar[j]=ar[i];
            break;
        }
        else
            ar[j]=ar[i];
        j--;
    }
    ar[i]=value;
    printf("\t\tNow, the array becomed this -\n");
    for(i=0;i<5;i++)
        printf("\t\t%d\n",ar[i]);
//  getch();
    return 0;
}