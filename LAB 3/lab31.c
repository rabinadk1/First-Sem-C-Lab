//C Program to print the required output
#include <stdio.h>
int main()
{
	int x ,y;
	x=6,y=3;
	printf("x\t\ty\t\t\b\bexpressions\t results\n");
	printf("%-8d|\t%-8d|\tx=y+3\t\t|x=%d\n",x,y,y+3);
	printf("%-8d|\t%-8d|\tx=y-2\t\t|x=%d\n",x,y,y-2);
	printf("%-8d|\t%-8d|\tx=y*5\t\t|x=%d\n",x,y,y*5);
	printf("%-8d|\t%-8d|\tx=x/y\t\t|x=%d\n",x,y,x/y);
	printf("%-8d|\t%-8d|\tx=x%%y\t\t|x=%d\n",x,y,x%y);
	return 0;
}
