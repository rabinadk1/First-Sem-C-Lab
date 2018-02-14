#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, sum=0,*a;
	printf("Enter the number of integers you want to add: ");
	scanf("%d",&n);
	a=calloc(n,sizeof(int));
	printf("Enter the integers: ");
	for (int i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum+=a[i];
	}
	printf("The sum of integers is %d.",sum);
	return 0;
}
