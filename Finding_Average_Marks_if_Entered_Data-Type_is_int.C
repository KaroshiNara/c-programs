//This program is for calculating Average marks if the Entered Number Data Type is Int ;-)
#include<stdio.h>
//#include<conio.h>
//Declaration of Function (Although its not necessary if you define it before the Main Function)----
void avg(float,float,float,float,float);
//Defination of Function----------------
void avg(float a,float b,float c,float d,float e)
{
 printf("Average = %.3f",(a+b+c+d+e)/5);
}
//Main function-------------------------
int main() {
    int a,b,c,d,e;
//  clrscr();
    printf("Enter Numbers -\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg(a,b,c,d,e);
//  getch();
}