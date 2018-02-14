#include <stdio.h>
int main()
{
	char a[200];
	printf("Enter a sentence: ");
	scanf("%[^\n]",a);
	for (int i=0;a[i]!=0;i++)
	{
		if(a[i]==' ')
		{
			for(int j=i;a[j]!=0;j++)
				a[j]=a[j+1];
		}
		else if(a[i]=='.')
			a[i]=':';
	}
	printf("The sentence is: %s",a);
	return 0;
}
