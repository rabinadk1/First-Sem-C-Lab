#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr;
	fptr=fopen("filec.txt","w");
	if(fptr==NULL) {
		printf("Error Occured\n");
		exit(1);
	}
	char c;
	printf("Enter the text: ");
	while((c=getchar())!='\n')
		putc(c,fptr);
	fclose(fptr);
	return 0;
}
