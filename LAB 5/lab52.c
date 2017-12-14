//a program to find GCD (great common divisor or HCF) and LCM (least common multiple) of two numbers
#include <stdio.h>
int main() {
	int a,b,m,n,l,r;
	printf("Input the first number: ");
	scanf("%d",&a);
	printf("Input the second number: ");
	scanf("%d",&b);
	m=a,n=b;
	while(m!=0) {
		r=n%m;
		n=m;
		m=r;
	}
	l=a*b/n;
	printf("\nThe HCF of %d and %d is %d.\n",a,b,n);
	printf("The LCM of %d and %d is %d.",a,b,l);
	return 0;
}
