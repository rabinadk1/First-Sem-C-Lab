//a program to find the largest and smallest among three entered numbers and also display whether the identified largest smallest number is even or odd
#include <stdio.h>
int main() {
	int a,b,c,largest,smallest;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	if (a>b && a>c) {
		largest=a;
	}
	else if (b>a && b>c) {
		largest=b;
	}
	else {
		largest=c;
	}
	if (a<b && a<c) {
		smallest=a;
	}
	else if (b<a && b<c) {
		smallest=b;
	}
	else {
		smallest=c;
	}
	printf("The largest number is %d.\n",largest);
	(largest%2)?printf("%d is an odd number.\n",largest):printf("%d is an even number.\n",largest);
	printf("The smallest number is %d.\n",smallest);
	(smallest%2)?printf("%d is an odd number.",smallest):printf("%d is an even number.",smallest);
	return 0;
}
