#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fptr;
	fptr=fopen("stringc.txt","w+");
	char a[50],c;
	int n;
	printf("How many sets of strings do you want to enter: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%s",a);
		fputs(a,fptr);
		putc(' ',fptr);
	}
	rewind(fptr);
	printf("The contents of file is:\n");
	while((c=getc(fptr))!=EOF)
	{
		putchar(c);
	}
	fclose(fptr);
	return 0;
}
