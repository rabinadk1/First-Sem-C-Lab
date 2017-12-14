// C program to read the values of coefficients a, b and c of a quadratic equation ax^2+bx+c=0 and find roots of the equation
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float discriminant, root1,root2, realPart, imaginaryPart;
	printf("Enter the values of coefficients a, b & c in quadratic equation (ax^2+bx+c=0): ");
	scanf("%d %d %d",&a,&b,&c);

	discriminant = b*b-4*a*c;

	// condition for real and different roots
	if (discriminant > 0)
	{
		// sqrt() function returns square root
		root1 = (-b+sqrt(discriminant))/(2*a);
		root2 = (-b-sqrt(discriminant))/(2*a);
		printf("root1 = %f\nroot2 = %f",root1 , root2);
    }

	//condition for real and equal roots
	else if (discriminant == 0)
	{
		root1 = root2 = -b/(2*a);
		printf("root1 = root2 = %f", root1);
    }

	// if roots are not real
	else
	{
		realPart = -b/(2*a);
		imaginaryPart = sqrt(-discriminant)/(2*a);
		printf("root1 = %f+%fi\nroot2 = %f-%fi", realPart, imaginaryPart, realPart, imaginaryPart);
	}
	return 0;
}
