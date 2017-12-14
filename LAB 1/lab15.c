//program to find the area of ellipse
#include <stdio.h>
#define PI 3.141592654
 int main()
 {
   int minor=4, major=6;
   float area;
   area= PI*minor*major/4;
   printf("The required area of ellipse of major axis %dcm and minor axis %dcm is %fsq.cm",major,minor,area);
   return 0;
 }
