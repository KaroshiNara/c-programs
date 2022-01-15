//This program is of Fabonacci Series.
#include<stdio.h>
//#include<conio.h>
int main() {
    int fir=0, sec=1,third,value,i;
//  clrscr();
    printf("Enter the Value ");
    scanf("%d",&value);
    if(value<3) {
        if(value==1)
            printf("0");
        else
            printf("1");
    }
    for(i=3;i<=value;i++) {
     third=fir+sec;
     fir=sec;
     sec=third;
    }
    printf("%d",third);
//  getch();
    return 0;
}
