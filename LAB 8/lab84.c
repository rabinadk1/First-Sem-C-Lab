#include <stdio.h>
#include <string.h>
int main()
{
	char sent[200];
	int wc=1,cc;
	printf("Enter a sentence: ");
	scanf("%[^\n]",sent);
	cc=strlen(sent);
	for(int i=0;i<cc;i++)
	{
		if(sent[i]==' ')
			wc++;
	}
	printf("The number of characters are %d and number of words are %d.",cc,wc);
	return 0;
}
