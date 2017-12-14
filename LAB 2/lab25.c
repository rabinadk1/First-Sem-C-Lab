//program to check odd or even number using different operators
#include <stdio.h>
int main () {
	int a;
	printf("Input the number: ");
	scanf("%d",&a);

	//using modulus operator
	if (a%2==0)
		printf("%d is even according to modular operator.\n",a);
	else
		printf("%d is odd according to modular operator.\n",a);

	//using Bitwise operator
	if ((a&1)==0)
		printf("%d is even according to bitwise operator.\n",a);
	else
		printf("%d is odd according to bitwise operator.\n",a);

	//without using bitwise and modulus operator
	if ((a/2)*2==a)
		printf("%d is even without using bitwise and modulus operator.\n",a);
	else
		printf("%d is odd without using bitwise and modulus operator.\n",a);

	//using conditional operator
	a%2==0? printf("%d is even according to conditional operator.\n",a): printf("%d is odd according to conditional operator.",a);

	return 0;
}
