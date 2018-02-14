#include <stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter the numbers: ");
	scanf("%d %d",&a,&b);
	printf("Before swapping:\na=%d\tb=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping:\na=%d\tb=%d\n",a,b);
	return 0;
}
void swap(int *p, int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
