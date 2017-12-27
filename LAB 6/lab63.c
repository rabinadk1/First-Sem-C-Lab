#include <stdio.h>
float fact(int x) {
	int i,b=1;
	for (i=1;i<=x;i++)
		b*=i;
	return b;
}
int main() {
	int n,r,C,P;
	printf("Input values for n and r,where n is total number of things and r is the number of thigs taken at a time.\n: ");
	scanf("%d %d",&n,&r);
	P=fact(n)/fact(n-r);
	C=P/fact(r);
	printf("The permutation of %d things taken %d at a time is %d.",n,r,P);
	printf("The combination of %d things taken %d at a time is %d.\n",n,r,C);
	return 0;
}
