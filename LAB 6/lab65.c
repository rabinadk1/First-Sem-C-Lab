#include <stdio.h>
int global=10;
void stat();
void loc();
int main()
{
	printf("Printing local variable first time:\n");
	loc();
	printf("Printing local variable second time:\n");
	loc();
	printf("Printing static variable first time:\n");
	stat();
	printf("Printing static variable second time:\n");
	stat();
	printf("Printing global variable: %d\n",global);
}
void stat()
{
	static int stat;
	printf("Static variable is: %d\n",stat);
	stat++;
}

void loc()
{
	int local=0;
	printf("Local variable is: %d\n",local);
	local++;
}
