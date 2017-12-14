//program to find the area of a circle
#include <stdio.h>
#define PI 3.141592654
int main () {
	int r=5;
	float area;
	area=PI*r*r;
	printf("The area of circle of radius %d is %f.",r,area);
	return 0;
}
