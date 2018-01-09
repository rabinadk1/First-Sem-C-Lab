#include <stdio.h>
int main()
{
	float a[10];
	for(int i=0;i<10;i++)
	{
		printf("Input floating number(%d): ",i+1);
		scanf("%f",&a[i]);
	}
	printf("The entered numbers are:\n");
	for(int i=0;i<10;i++)
		printf("%f\n",a[i]);
	return 0;
}
