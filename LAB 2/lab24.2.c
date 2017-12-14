//a program to swap to variables without using the third one
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Before: ");
	scanf("%d %d",&num1,&num2 );
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("\nAfter Swapping: \n");
	printf("%d\t%d", num1, num2 );
	return 0;
}
