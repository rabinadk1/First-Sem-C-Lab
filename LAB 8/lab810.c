#include <stdio.h>
int main(){
	int i,c,j;
	i=1,c=0;
	char a[]="UNIVERSITY";
	while(i>0)
	{
		for(j=0;j<=i;j++)
			printf("%c",a[j]);
		printf("\n");
		c++;
		if(c<5)
			i+=2;
		else
			i-=2;
	}
	return 0;
}
