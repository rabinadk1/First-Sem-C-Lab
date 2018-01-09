#include <stdio.h>
int main()
{
	int a[3][2],b[3][2],c[3][2],i,j;
	printf("For matrix 'a':\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element of %d row and %d column: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("For matrix 'b':\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element of %d row and %d column: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
