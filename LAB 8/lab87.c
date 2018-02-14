#include <stdio.h>
#include <string.h>
int main()
{
	char a[400],b[200];
	printf("Enter first sentence: ");
	scanf("%[^\n]",a);
	getchar();
	printf("Enter second sentence: ");
	scanf("%[^\n]",b);
	strcat(a,b);
	printf("The concatenated string is: %s",a);
	return 0;
}
