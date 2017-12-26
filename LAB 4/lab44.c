//A program that asks a number and test the number whether it is multiple of 5 or not divisible by 7 but not by eleven.
#include <stdio.h>
int main() {
	int num;
	printf("Input a number: ");
	scanf("%d",&num);
	if (num%5)
		printf("%d is not divisible by 5.",num);
	else
		printf("%d is not divisible by 5.",num);
	if ((num%7==0) && (num%11!=0))
		printf("%d is divisible by 5 and 7 but not by 11.",num);
	else
		printf("%d is divisible by 5 but doesn't satisfy the later condition .",num);
	return 0;
}
