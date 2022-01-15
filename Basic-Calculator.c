//This program is for making a Standard Calcultor using User-Defined Functions and Data Passing.
#include<stdio.h>
//include<conio.h>
//These are User-Defined Functions---------------------------------------------------------------------------------------------------------------
//This one is of Addition----------------------------------------------------------------------------------------------------------------------------
void add() {
	int size,i=0;
	printf("Enter the Total Number of Elemnts you want to Add -\n");
	scanf("%d",&size);
	float ar[size],sum=0;
	printf("Enter the Numbers -\n");
	for(;i<size;i++){
		scanf("%f",&ar[i]);
		sum = sum+ar[i];
	}
	printf("Total Sum = %.4f",sum);
}
//This one is for Subtraction--------------------------------------------------------------------------------------------------------------------
void sub() {
	float fir,sec;
	printf("Enter the 1st Number -\n");
	scanf("%f",&fir);
	printf("Enter the 2nd Number -\n");
	scanf("%f",&sec);
	printf("%.3f - %.3f = %.3f",fir,sec,fir-sec);
}
//This one is for Multiplication-----------------------------------------------------------------------------------------------------------------
void multi() {
	int size,i=0;
	printf("Enter the Total Numbers you want to Multiply -\n");
	scanf("%d",&size);
	float ar[size];
	double pro=1;
	printf("Enter the Numbers for Multiplication -\n");
	for(;i<size;i++) {
		scanf("%f",&ar[i]);
		pro=pro*ar[i];
	}
	printf("Final Product = %.3lf",pro);
}
//This one is for Division-----------------------------------------------------------------------------------------------------------------------
void div() {
	float fir,sec;
	printf("Enter the 1st Number -\n");
	scanf("%f",&fir);
	printf("Enter the 2nd Number -\n");
	scanf("%f",&sec);
	printf("Division =\n%.3f / %.3f = %.3f",fir,sec,fir/sec);
}
//This one is for  Percentage--------------------------------------------------------------------------------------------------------------------
void percent() {
	float num,base;
	printf("Enter the Number -\n");
	scanf("%f",&num);
	printf("Enter the Number out of which you want to calculate -\n");
	scanf("%f",&base);
	printf("Percentge = %.4f",(num/base)*100);
}
//This one is for 1/X----------------------------------------------------------------------------------------------------------------------------
void one() {
	double num;
	printf("Enter the Number -\n");
	scanf("%lf",&num);
	printf("Answer = %.4lf",1/num);
}
//This one is for Exponential--------------------------------------------------------------------------------------------------------------------
void expo() {
	double i=1,power,output,base;
	printf("Enter the Base Number -\n");
	scanf("%lf",&base);
	printf("Enter the Exponential Number -\n");
	scanf("%lf",&power);
	output=base;
	if(power==0)
		printf("Output = 1");
	else if(power==1)
		printf("Output = %lf",base);
	else {
		for(;i<power;i++)
				output=output*base;
		printf("Output = %lf",output);
	}
}
//This one is for Factorial----------------------------------------------------------------------------------------------------------------------
void factorial() {
	float fact=1,num,i=1;
	printf("Enter the Number for Factorial -\n");
	scanf("%f",&num);
	for(;i<=num;i++)
		fact=fact*i;
	printf("Factorial of %.0f = %.0f",num,fact);
//This is the Main Function----------------------------------------------------------------------------------------------------------------------
}
int main() {
	int opt1;
	char choice;
	do {
		printf("\t\t__________________________________________\n");
		printf("\t\t|| 1.Addition         || 2.Subtraction  ||\n");
		printf("\t\t|| 3.Multiplication   || 4.Division     ||\n");
		printf("\t\t|| 5.Percentage       || 6.[1/x]        ||\n");
		printf("\t\t|| 7.Exponential(X^y) || 8.Factorial    ||\n");
		printf("Choose the desired option -\n");
		scanf("%d",&opt1);
		switch(opt1) {
			case 1: {
				add();
				break;
			}
			case 2: {
				sub();
				break;
			}
				case 3: {
				multi();
				break;
			}
			case 4: {
				div();
				break;
			}
			case 5: {
				percent();
				break;
			}
			case 6: {
				one();
				break;
			}
			case 7: {
				expo();
				break;
			}
			case 8: {
				factorial();
				break;
			}
			default:
		   	printf("Invalid Choice!");
		}
	getchar();
	printf("\nDo you want to Continue (Y) -\n");
	scanf("%c",&choice);
	}while(choice=='y'||choice=='Y');
	return 0;
}
