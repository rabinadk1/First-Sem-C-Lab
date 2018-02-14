#include <stdio.h>
int main()
{
	char a[200],b[200];
	int i;
	printf("Enter a string: ");
	scanf("%[^\n]",a);
	for (i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	b[i]=0;
	printf("The string copied is: %s",b);
	return 0;
}
