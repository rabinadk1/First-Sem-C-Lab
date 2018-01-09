#include <stdio.h>
int main()
{
	char a[10];
	int i,len,c=1;
	printf("Input string: ");
	scanf("%s",a);
	for (i=0;i<10;i++)
	{
		if (a[i]=='\0')
		{
			len=i-1;
			break;
		}
	}

	for (i=0;i<(len/2);i++)
	{
		if (a[i]!=a[len-i])
		{
			c=0;
			break;
		}
	}
	if (c)
		printf("%s is palindrome.",a);
	else
		printf("%s isn't a palindrome.",a);
	return 0;
}
