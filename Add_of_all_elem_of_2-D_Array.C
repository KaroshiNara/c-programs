//This is program for adding all the elements in an 2-D Array
#include<stdio.h>
//#include<conio.h>
int main() {
    int ar[3][3],i=0,sum=0;
//  clrscr();
    printf("Enter 9 Numbers for sum -\n");
    for(;i<3;i++) {
        int j=0;
    for(;j<3;j++) {
        scanf("%d",&ar[i][j]);
        sum=sum+ar[i][j];
        }
    }
    printf("Now, Sum = %d",sum);
//  getch();
    return 0;
}