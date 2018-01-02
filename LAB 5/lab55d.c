#include <stdio.h>
int main() {
	int a,b,c;
	for (a=5;a>0;a--) {
		for (b=5,c=6-a;b>=6-a;b--) {
			printf("%d\t",c);
			c+=b;
		}
		printf("\n");
	}
	return 0;
}
