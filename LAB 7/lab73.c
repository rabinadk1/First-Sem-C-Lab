#include <stdio.h>
int main()
{
	int a[8],i,sum;
	float avg;
	for(i=0;i<8;i++)
	{
		printf("Input number(%d): ",i+1);
		scanf("%d",&a[i]);
	}
	sum=a[0];
	for(i=1;i<8;i++)
		sum+=a[i];
	avg=sum/8.0;
	printf("The sum and average of the numbers are %d and %f.",sum,avg);
}
