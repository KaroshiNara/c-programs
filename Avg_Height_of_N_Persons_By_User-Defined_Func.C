//This progtram is for finding average height of N number of persons using User-Defined Functions.
#include<stdio.h>
//#include<conio.h>
//This part is for Adding heights-----------------------------------------
float height(float rec) {
    float value=0,send;
    send=rec+value;
    value=rec;
    return(send);
}
//This parrt is for calculating the Average Height-----------------------------
void avg(float rec,float num) {
    printf("%.3f",rec/num);
}
//The Main Function-----------------------------
int main() {
    int i,num;
    float value,rec;
// clrscr();
    printf("Enter the numbers of persons whose height you want to measure:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++) {
    printf("Enter the height of each person -\n");
    scanf("%f",&value);
    rec=height(value);
    }
    avg(rec,num);
//  getch();
    return 0;
}