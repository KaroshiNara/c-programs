//This Program is for Searching in an Array of the Structure.
#include<stdio.h>
//#include<conio.h>
struct table {
	int r_no;
	char name[20];
	float marks;
};
int main() {
	struct table t[3];
	static int i=0,search,f=0,j;
//	clrscr();
	for(;i<3;i++) {
		printf("Enter the Roll No. -\n");
		scanf("%d",&t[i].r_no);
		printf("Enter the Name -\n");
		fflush(stdin);
	    gets(t[i].name);
	    printf("Enter the Total Marks -\n");
	    fflush(stdin);
		scanf("%f",&t[i].marks);
	}
	printf("Enter the Roll No. for Searching -\n");
	scanf("%d",&search);
	for(i=0;i<3;i++)
		if(search==t[i].r_no) {
			f=1;
			j=i;
		}
	}
	if(f==1) {
		printf("Roll No. - %d\nName - ",t[j].r_no);
	    puts(t[j].name);
	    printf("Total Marks - %.3f",t[j].marks);
	}
	else
	    printf("No Record Found!");
//	getch();
	return 0;
}
