//This program is for Sorting in an Array.
#include<stdio.h>
//#include<conio.h>
int main() {
    float ar[10],other;
    int i=0,j;
//  clrscr();
    printf("Enter 10 numbers -\n");
    for(;i<10;i++)
        scanf("%f",&ar[i]);
    printf("Entered numbers are -\n");
    for(i=0;i<10;i++)
        printf("%f\n",ar[i]);
//For Sorting---------------------------
    for(i=0;i<10;i++)
        for(j=i+1;j<10;j++)
            if(ar[i]<ar[j]) {
                other=ar[j];
                ar[j]=ar[i];
                ar[i]=other;
            }
    printf("Now after sorting the list becomed this -\n");
    for(i=0;i<10;i++)
        printf("%f\n",ar[i]);
//  getch();
 return 0;
}
