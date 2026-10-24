#include <stdio.h>
#include <math.h>


int main () {
	int annoy;			/*Sir told to initialize cuz vals may be presaved*/
	printf("%d\n", annoy);

	int length = 9, width = 11;

	printf("I chose ts randomly %d\n", (length%width)/(width%length)/annoy);
	
	float var1 = 5;
	int var2 = 2;

	printf("%lf\n", var1/var2);
	printf("%lf\n", var1/var2);
	
	printf("%f.2\n", var1/3);

	double a = 3.74;
	double b = 4.52;
	double c = 9.05;

	printf("Avg is %lf\n", (a+b+c)/3);
	
	/*alr we bak at it*/
	double C;
	printf("Enter temperature in Celsuis: ");
	scanf("%lf", &C);
	double F = (9*C)/5+32;
	printf("Temp in fareheit is: %lf", F);
	
	printf("We are solving for the roots of a quadratic.\nPlease enter the coeffectient of x^2: ");
	scanf("%lf", &a);
	printf("Coeffificient of x: %lf", b);
	scanf("%lf", &b);
	printf("Constant term: %lf", c);
	scanf("%lf", &c);
	if (b*b - 4*a*c >=0) {
		printf("The roots are %lf and %lf", (-b-sqrt(b*b - 4*a*c) )/2*a, (-b+sqrt(b*b - 4*a*c) )/2*a);
	}
	else {
		printf("Roots are unreal");
	}

}
