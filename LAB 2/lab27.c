//program to calculate the size of char, float, double and long double
#include <stdio.h>
int main () {
	char a;
	float b;
	double c;
	long double d;
	printf("Data size of char is: %d\n",sizeof(a));
	printf("Data size of float is: %d\n",sizeof(b));
	printf("Data size of double is: %d\n",sizeof(c));
	printf("Data size of long double is: %d\n",sizeof(d));
	return 0;
}
