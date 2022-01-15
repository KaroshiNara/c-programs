//This program is for implementation of strcmp function.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str1[20], str2[20];
	int i=0,f1=-1,f2=-1;
//	clrscr();
	printf("Enter 1st string -\n");
	gets(str1);
	printf("Enter 2nd string -\n");
	gets(str2);
	for(;str1[i]!=NULL;i++)
		f1++;
	for(i=0;str2[i]!=NULL;i++)
		f2++;
	if(f1>f2) {
		f2=f1+2;
		for(i=0;i<f2;i++) {
	    	if(str1[i]>str2[i]) {
			    printf("1st String is Greater ,i.e., ");
				puts(str1);
				break;
		    }
			else {
			    printf("2nd String is Greater ,i.e., ");
				puts(str2);
				break;
			}
		}
	}
	else if(f2>f1) {
		f1=f2+2;
		for(i=0;i<f1;i++) {
	    	if(str1[i]>str2[i]) {
			    printf("1st String is Greater ,i.e., ");
				puts(str1);
				break;
		    }
			else {
			    printf("2nd String is Greater ,i.e., ");
				puts(str2);
				break;
			}
		}
	}
	else
		for(i=0;i<=f1;i++) {
	    	if(i==f1) {
	    		if(str1[i]>str2[i]) {
			        printf("1st String is Greater ,i.e., ");
				    puts(str1);
				    break;
		        }
			    else if(str2[i]>str1[i]) {
			        printf("2nd String is Greater ,i.e., ");
				    puts(str2);
					break;
			    }
			    else
			    	printf("Both Strings are equal.");
			}
			else {
				if(str1[i]>str2[i]) {
			        printf("1st String is Greater ,i.e., ");
				    puts(str1);
				    break;
		        }
			    else if(str2[i]>str1[i]) {
			        printf("2nd String is Greater ,i.e., ");
				    puts(str2);
				    break;
			    }
			}
		} 
//	getch();
	return 0;
}
