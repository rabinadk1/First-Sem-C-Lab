#include <stdio.h>
typedef struct
{
	float x,y;
}complex;


int main()
{
	complex P,Q,R,S;
	printf("Input first complex number: ");
	scanf("%f %f",&P.x,&P.y);
	printf("Input second complex number: ");
	scanf("%f %f",&Q.x,&Q.y);
	R.x=P.x+Q.x;
	R.y=P.y+Q.y;
	S.x=P.x-Q.x;
	S.y=P.y-Q.y;
	printf("The addition results, %.2f+%.2fi",R.x,R.y);
	printf("The subraction results, %.2f+%.2fi",S.x,S.y);
	return 0;
}
