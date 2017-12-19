//a program to check whether input alphabet is vowel or not using if-else and switch statement
#include <stdio.h>
int main() {
	char a,la;
	printf("Input the alphabet: ");
	scanf("%c",&a);
	la=tolower(a);
	//using if else statement
	printf("\nUsing If Else statements:\n");
	if (la=='a'||la=='e'||la=='i'||la=='o'||la=='u')
		printf("%c is a vowel\n",a);
	else
		printf("%c is a consonant\n",a);
	//using switch statement
	printf("\nUsing Switch statement:\n");
	switch(la) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel.",a);
			break;
		default:
			printf("%c is a consonant.",a);
	}
	return 0;
}
