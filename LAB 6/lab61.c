#include <stdio.h>
int sum(int,int);
int sub(int,int);
int mult(int,int);
float div(int,int);
int main() {
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("The sum of %d and %d is %d.\n",a,b,sum(a,b));
	printf("The difference between %d and %d is %d.\n",a,b,sub(a,b));
	printf("The product of %d and %d is %d.\n",a,b,mult(a,b));
	printf("The quotient of %d and %d is %f.\n",a,b,div(a,b));
	return 0;
}
int sum(int x, int y) {
	return (x+y);
}
int sub(int x, int y) {
	return (x-y);
}
int mult(int x, int y) {
	return (x*y);
}
float div(int x, int y) {
	return ((float)x/y);
}
