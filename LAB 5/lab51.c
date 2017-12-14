//a program to input two integer numbers and display the sum of even numbers between these two input numbers.
#include <stdio.h>
int main() {
	int sum,n,a,b;
	printf("Input the first number: ");
	scanf("%d",&a);
	printf("Input the second number: ");
	scanf("%d",&b);
	sum=0,n=a+1;
	while (n<b) {
		if (n%2==0)
			sum+=n;
		n++;
	}
	printf("The sum of the even numbers between %d and %d is %d.",a,b,sum);
	return 0;
}
