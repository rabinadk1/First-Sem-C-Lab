#include <stdio.h>
int main() {
	int a=5,b,c;
	while (a>0) {
		b=5;
		c=6-a;
		while (b>=(6-a)) {
			printf("%d\t",c);
			c+=b;
			b--;
		}
		printf("\n");
		a--;
	}
	return 0;
}
