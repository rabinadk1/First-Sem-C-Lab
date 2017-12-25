#include <stdio.h>
int main() {
	int a=1,b;
	while (a<=7) {
		int b=1;
		while (b<=a) {
			printf("*");
			b++;
		}
		printf("\n");
		a++;
	}
	a=1;
	while (a<=6) {
		b=1;
		while (b<=a) {
			printf("**");
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
}
