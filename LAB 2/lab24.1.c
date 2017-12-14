// program to swap two variables using third variable
#include <stdio.h>
int main()
{
	int num1, num2, temp;
	printf("Before: ");
	scanf("%d %d",&num1,&num2 );
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\nAfter Swapping: \n");
	printf("%d\t%d", num1, num2 );
	return 0;
}
