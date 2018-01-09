#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	printf("For matrix 'a':\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter element of %d row and %d column: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("For matrix 'b':\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter element of %d row and %d column: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			for (k=0,sum=0;k<3;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
}
