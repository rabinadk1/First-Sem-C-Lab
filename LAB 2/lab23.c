//to calculate simple and compound interest
#include <stdio.h>
#include <math.h>
int main () {
	int P,T;
	float R,SI,CI;
	printf("Input Principal: ");
	scanf("%d",&P);
	printf("Input Time(in years): ");
	scanf("%d",&T);
	printf("Input Rate p.a.: ");
	scanf("%f",&R);
	SI=P*T*R/100;
	printf("Simple Interest is : %f\n",SI);
	CI=P*(pow((1+R/100),T)-1);
	printf("Compound Interest is : %f\n",CI);
	return 0;
}
