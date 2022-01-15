//This program is an example of showing the use of Macro.
#include <stdio.h>
//#include<conio.h>
float pi=3.1415;    //Macro-------
int main() {
//    clrscr();
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = pi*radius*radius;
    printf("Area=%.2f",area);
//    getch();
}