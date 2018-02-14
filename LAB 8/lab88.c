#include <stdio.h>
#include <string.h>
int main()
{
	char a[50],b[50];
	printf("Enter first sentence: ");
	scanf("%[^\n]",a);
	getchar();
	printf("Enter second sentence: ");
	scanf("%[^\n]",b);
	int c=strcmp(a,b);
	if (c==0)
		printf("The strings are same.");
	else
		printf("The strings are different.");
	return 0;
}
