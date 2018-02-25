#include <stdio.h>
int main()
{
	char a[10];
	int len,j,c=1;
	printf("Input string: ");
	scanf("%s",a);
	for (len=0;a[len]=='\0';len++)
	for (j=0;j<(len/2);j++)
	{
		if (a[j]!=a[len-j-1])
		{
			c=0;
			break;
		}
	}
	if (c)
		printf("%s is a palindrome.",a);
	else
		printf("%s isn't a palindrome.",a);
	return 0;
}
