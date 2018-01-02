#include <stdio.h>
int nat(int);
int main () {
	int x=50;
	printf("The sum of first %d natural numbers is %d.",x,nat(x));
	return 0;
}

int nat(int a) {
	int n;
	if (a==1)
		return 1;
	else
		n=a+nat(a-1);
	return n;
}
