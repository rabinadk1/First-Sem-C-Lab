// C program to read the values of coefficients a, b and c of a quadratic equation ax^2+bx+c=0 and find roots of the equation
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float dis, x1,x2, rp, ip;
	printf("Enter the values of coefficients a, b & c in quadratic equation (ax^2+bx+c=0): ");
	scanf("%d %d %d",&a,&b,&c);

	dis = b*b-4*a*c;

	// condition for real
	if (dis >= 0)
	{
		// sqrt() function returns square root
		x1 = (-b+sqrt(dis))/(2*a);
		x2 = (-b-sqrt(dis))/(2*a);
		printf("x1 = %f\nx2 = %f",x1 , x2);
    }
	// if roots are not real
	else
	{
		rp = -b/(2*a);
		ip = sqrt(-dis)/(2*a);
		printf("x1 = %f+%fi\nx2 = %f-%fi", rp, ip, rp, ip);
	}
	return 0;
}
