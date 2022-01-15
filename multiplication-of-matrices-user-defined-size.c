//This program is for Multipliation of 2 2-D matrices according to user size.
#include<stdio.h>
//#include<conio.h>
int main() {
	static int ar1[10][10],ar2[10][10],ar3[10][10],r1,r2,c1,c2,i,j,k;
//	clrscr();
	printf("Enter Number of rows (less than 11) for Matrix A -\n");
	scanf("%d",&r1);
	printf("Enter Number of columns (less than 11) for Matrix A -\n");
	scanf("%d",&c1);
	printf("Enter Number of rows (less than 11) for Matrix B -\n");
	scanf("%d",&r2);
	printf("Enter Number of columns (less than 11) for Matrix B -\n");
	scanf("%d",&c2);
	if(c1!=r2) {
		printf("Multiplication is not Possible");
//		getch();
		goto exit;
	}
	printf("Enter the values for Matrix A -\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%d",&ar1[i][j]);
	printf("Enter the values for Matrix B -\n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			scanf("%d",&ar2[i][j]);
	for(i=0;i<r1;i++)
		for(j=0;j<c2;j++) {
			ar3[i][j]=0;
			for(k=0;k<c2;k++)
				ar3[i][j]=ar3[i][j]+ar1[i][k]*ar2[k][j];
		}
	printf("The values for Matrix C are -\n");
	for(i=0;i<r1;i++) {
		for(j=0;j<c2;j++)
			printf("%d   ",ar3[i][j]);
		printf("\n");
	}
//	getch();
	exit:
	return 0;
}
