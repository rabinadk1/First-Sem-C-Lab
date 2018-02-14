#include <stdio.h>
#include <math.h>
typedef struct
{
	float x,y;
}COORD;

int main()
{
	COORD P,Q;
	printf("Enter the co-ordinates of point P: ");
	scanf("%f %f",&P.x,&P.y);
	printf("Enter the co-ordinates of point Q: ");
	scanf("%f %f",&Q.x,&Q.y);
	float dis=sqrt(pow(P.x-Q.x,2)+pow(P.y-Q.y,2));
	printf("The distance between the points is: %.2f units.",dis);
}
