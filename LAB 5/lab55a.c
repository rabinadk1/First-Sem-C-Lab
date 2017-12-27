#include <stdio.h>
int main() {
	int i,j;
	for (i=0;i<4;i++) {
		for (j=1;j<=16;j++) {
			if  (j==(4-i) || j==(5+i) || j==(12-i) || j==(13+i))
				printf("* ");
			else
				printf(" ");
		}
		printf("\n");
	}
}
