#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[50],*str[5],*n,*temp;
	int i;
	printf("Enter 5 strings:\n");
	for(i=0;i<5;i++)
	{
		scanf("%[^\n]",a);
		getchar();
		n=malloc(sizeof(a));
		strcpy(n,a);
		str[i]=n;
	}
	for(i=0;i<4;i++) {
		for(int j=(i+1);j<5;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("The sorted strings are:\n");
	for(i=0;i<5;i++)
		printf("%s\n",str[i]);
	return 0;
}
