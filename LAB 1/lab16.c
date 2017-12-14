//program to calculate Simple Interest
#include <stdio.h>
int main () {
	int P=4000,T=2;
	float R=5.5,I;
	I=P*T*R/100;
	printf("The simple interest of Principal Rs.%d in time %d years with rate %.2f p.a is Rs.%.2f.",P,T,R,I);
	return 0;
}
