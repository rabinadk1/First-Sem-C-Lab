#include <stdio.h>
int main()
{
	int n1,n2,n3,*a,*b,*c,great;
	a=&n1,b=&n2,c=&n3;
	printf("Enter the numbers: ");
	scanf("%d %d %d",a,b,c);
	if (*a>*b && *a>*c)
		great=*a;
	else if (*b>*c)
		great=*b;
	else
		great=*c;
	printf("Greatest number is: %d",great);
	return 0;
}
