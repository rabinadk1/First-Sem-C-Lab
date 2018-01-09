#include <stdio.h>
int fib(int);
int main()
{
	int x;
	printf("Input the number(n) to print nth term: ");
	scanf("%d",&x);
	printf("The %dth term of Fibonacci series is %d.",x,fib(x));
	return 0;
}

int fib(int n)
{
	if (n<3)
		return 1;
	return (fib(n-1)+fib(n-2));
}
