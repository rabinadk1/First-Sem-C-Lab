//a program to demonstrate the use of function macros(preprocessor directives)
#include <stdio.h>
#define PI 3.1415
#define mult(x,y) (x*y)
#define sum(x,y) (x+y)
#define sub(x,y) (x-y)
#define div(x,y) (x/y)

int main()
{
    int a,b;
    float c;
    a=8,b=4;
    c=PI*mult(a,b);
    printf("PI*mult(%d,%d) = %f\n",a,b,c);
    c=PI*sum(a,b);
    printf("PI*sum(%d,%d) = %f\n",a,b,c);
    c=PI*sub(a,b);
    printf("PI*sub(%d,%d) = %f\n",a,b,c);
    c=PI*div(a,b);
    printf("PI*div(%d,%d) = %f\n",a,b,c);
    return 0;

}
