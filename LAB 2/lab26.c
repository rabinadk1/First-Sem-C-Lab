//a program to perform different operations on  x and z and display output
#include <stdio.h>
int main () {
	int x=2,y,z=4;
	y=x++ + ++x;
	printf("%d\n",y);

	y=++x + ++x;
	printf("%d\n",y);

	y=++x + ++x + ++x;
	printf("%d\n",y);

	y=x>z;
	printf("%d\n",y);

	y=x>z? x:z;
	printf("%d\n",y);

	y=x&z;
	printf("%d\n",y);

	y=x>>2 + z<<1;
	printf("%d",y);
	return 0;
}
