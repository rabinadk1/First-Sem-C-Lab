//a program to take a character input from keyboard and check if it is a number or alphabet or special character using ASCII CODE and again check if the character is using different character functions
#include <stdio.h>

int main() {
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);

	if(ch >= 48 && ch <= 57)
		printf("'%c' is a number.\n", ch);
	else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
		printf("%c is an alphabet.\n", ch);
	else
		printf("%c is a special character.\n\n", ch);

	(isalnum(ch))?printf( "%c is an alphanumeric character.\n", ch ):printf( "%c is NOT an alphanumeric character.\n", ch );

	(isblank(ch))?printf( "%c is a blank character.\n", ch ):printf( "%c is NOT a blank character.\n", ch );

	(isalpha(ch))?printf( "%c is an alphabetic character.\n", ch ):printf( "%c is NOT an alphabetic character.\n", ch );

	(iscntrl(ch))?printf( "%c is a control character.\n", ch ):printf( "%c is NOT a control character.\n", ch );

	(isdigit(ch))?printf( "%c is a Number-digit  character.\n", ch ):printf( "%c is NOT a Number-digit  character.\n", ch );

	(isupper(ch))?printf( "%c is an uppercase character.\n", ch ):printf( "%c is NOT an uppercase character.\n", ch );

	(islower(ch))?printf( "%c is a lowercase character.\n", ch ):printf( "%c is NOT a lowercase character.n", ch );

	(isxdigit(ch))?printf( "%c is a hexadecimal character.\n", ch ):printf( "%c is NOT a hexadecimal character.\n", ch );

	(isgraph(ch))?printf( "%c is a graphical character.\n", ch ):printf( "%c is NOT a graphical character.\n", ch );

	return 0;
}
