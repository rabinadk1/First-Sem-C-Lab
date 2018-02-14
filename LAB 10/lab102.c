#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fptr;
	fptr=fopen("filec.txt","r");
	if (fptr==NULL){
		printf("Error Occured\n");
		exit(1);
	}
	int i=0;
	char c,*p;
	while((c=getc(fptr))!=EOF)
	{
		i++;
	}
	rewind(fptr);
	p=calloc(i+1,sizeof(char));
	fgets(p,i+1,fptr);
	printf("The content in the file is:\n%s\n with %d characters.",p,i);
	fclose(fptr);
	return 0;
}
