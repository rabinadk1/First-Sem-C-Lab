#include <stdio.h>
int main()
{
	float a[10];
	int i,smallest,largest;
	for(i=0;i<10;i++)
	{
		printf("Input floating number(%d): ",i+1);
		scanf("%f",&a[i]);
	}
	largest=smallest=a[0];
	for(i=1;i<10;i++)
	{
		if (a[i]>largest)
			largest=a[i];
		if (a[i]<smallest)
			smallest=a[i];
	}
	printf("The largest and smallest numbers are %d and %d respecively.",largest,smallest);
	return 0;
}
