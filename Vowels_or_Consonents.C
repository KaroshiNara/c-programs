//This program is to check weather the entered character is a vowel or consonent.
#include<stdio.h>
//#include<conio.h>
int main() {
    char ch;
//  clrscr();
    printf("Enter a character to know that is it a Vowel or a Consonent?\n");
    scanf("%c",&ch);
    switch(ch) {
        case'a':
        case'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
	    case'U':
	        printf("%c is a Vowel.",ch);
            break;
        default:
            printf("%c is a Consonent.",ch);
    }
//  getch();
    return 0;
}
