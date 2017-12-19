//Print a two or more digit number in reverse order
#include <stdio.h>
int main() {
	int num,rem,rev=0,num1;
	printf("Input a two or higher digit number: ");
	scanf("%d",&num);
	num1=num;
	while(num1!=0) {
		rem=num1%10;
		rev=rev*10 +rem;
		num1/=10;
	}
	printf("The reverse of %d is %d.",num,rev);
	return 0;
}
