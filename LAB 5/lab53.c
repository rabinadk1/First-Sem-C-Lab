//a program to display Fibonacci series of last term up to 300
#include <stdio.h>
int main() {
	int a,b,c;
	a=b=1;
	printf("%d\n%d\n",a,b);
	while (1) {
		c=a+b;
		if (c>=300)
			break;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	return 0;
}
