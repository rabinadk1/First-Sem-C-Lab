//program to input and print three numbers in forward and reverse order
#include <stdio.h>
int main () {
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	printf("Forward Order: %d, %d, %d\n",a,b,c);
	printf("Reverse Order: %d, %d, %d",c,b,a);
	return 0;
}
