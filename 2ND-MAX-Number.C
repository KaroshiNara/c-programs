//This program is for finding the 2nd max no.
#include<stdio.h>
//#include<conio.h>
int main() {
   int ar[5],max1,max2,i=0,j;
   printf("Enter 5 Numbers -\n");
   for(;i<5;i++)
      scanf("%d",&ar[i]);
   max1=ar[0];
   for(i=1;i<5;i++)
      if(max1<ar[i]) {
         max1=ar[i];
         j=i;
      }
   max2=ar[0];
   for(i=1;i<5;i++) {
      if(i==j)
         continue;
      else
         if(max2<ar[i])
            max2=ar[i];
   }
   printf("2nd Maximum Number = %d",max2);
   return 0;
}
