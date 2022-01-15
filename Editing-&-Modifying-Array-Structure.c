//This program is for Searching and Replacing.
#include<stdio.h>
//#include<conio.h>
struct table
{
	int r_no;
	char name[20];
	float marks;
	char grade;
};
int main() {
	struct table t[3];
	static int i,search,f,j,choice;
	for(;i<3;i++) {
		printf("Enter the Roll No. -\n");
		scanf("%d",&t[i].r_no);
		printf("Enter the Name -\n");
		fflush(stdin);
	    gets(t[i].name);
	    printf("Enter the Total Marks -\n");
	    fflush(stdin);
		scanf("%f",&t[i].marks);
		printf("Enter the Grades -\n");
		fflush(stdin);
		scanf("%c",&t[i].grade);
	}
	printf("Enter the Roll No. for Searching -\n");
	scanf("%d",&search);
	for(i=0;i<3;i++)
		if(search==t[i].r_no) {
			f=1;
			j=i;
		}
	printf("Roll No. - %d\nName - ",t[j].r_no);
	puts(t[j].name);
	printf("Total Marks - %.3f\nGrade - %c\n",t[j].marks,t[j].grade);
	if(f==1) {
		printf("For Changing Total Marks Press-1\n");
		printf("For Changing Grades Press-2\n");
		again:
		printf("Enter Your Choice - ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: {
					printf("Enter New Total Marks -\n");
					scanf("%f",&t[j].marks);
					break;
				}
			case 2: {
					printf("Enter New Grades -\n");
					fflush(stdin);
					scanf("%c",&t[j].grade);
					break;
				}
			default: {
					printf("Invalid Choice!");
					goto again;
				}
		}
	}
	else {
	    printf("No Record Found!");
	}
	printf("Roll No. - %d\nName - ",t[j].r_no);
	puts(t[j].name);
	printf("Total Marks - %.3f\nGrade - %c",t[j].marks,t[j].grade);
//	getch();
	return 0;
}
