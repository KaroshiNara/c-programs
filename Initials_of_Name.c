//This program is for printing the Initial's of Name.
#include<stdio.h>
//#include<conio.h>
int main() {
	char str[20],ini[5];
	int i=0,j,k=0;
	printf("Enter your Full Name -\n");
	gets(str);
	for(;str[i]!=NULL;i++) {
		if(i==0) {
			if(str[i]>91) {
				ini[k]=str[i]-32;
				k++;
				ini[k]=46;
			}
			else {
				ini[k]=str[i];
				k++;
				ini[k]=46;
			}
			k++;
		}
		else if(str[i]==32) {
			j=i+1;
			if(str[j]>91) {
			    ini[k]=str[j]-32;
			    k++;
			    ini[k]=46;
	     	}
	     	else {
	     		ini[k]=str[j];
	     		k++;
	     		ini[k]=46;
			}
			k++;
		}
		else
			continue;
	}
	printf("The Final Output is -\n");
	puts(ini);
//	clrscr();
	return 0;
}
