//This program shows the implementation of Structure.
#include<stdio.h>
//#include<coniio.h>
struct student {
	int rno;
	char name[15];
	int marks;
};
int main() {
	struct student table;
//	clrscr();
	printf("Enter the Roll No. -\n");
	scanf("%d",&table.rno);
	fflush(stdin);
	printf("Enter the Total Marks -\n");
	scanf("%d",&table.marks);
    printf("Enter the Name -\n");
	fflush(stdin);
	gets(table.name);
	printf("\n\n%d\n%d\n",table.rno,table.marks);
    puts(table.name);
//	getch();
	return 0;
}
