//This program is for solving Hanoi Tower Problem.
#include<stdio.h>
//#include<conio.h>
void tower(int n, char from, char to, char temp) {
    if(n==1) {
        printf("Move disk 1 from %c to %c\n", from, to);
    return;
    }
    tower(n-1,from, temp, to);
    printf("Move disk %d from %c to %c\n",n, from, to);
    tower(n-1,temp,to,from);
}
int main() {
    int n;
//  clrscr();
    printf("Enter the no. of Disks\n");
    scanf("%d",&n);
    tower(n,'A','C','B');
//  getch();
    return 0;
}