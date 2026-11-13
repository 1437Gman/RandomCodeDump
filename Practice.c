# include <stdio.h>
# include <math.h>

int main () {
	int a = 12;
	float b = 12.56;
	double c = 16.13;
	
	float avg = (a+b+c)/3 ;
	printf("%f", avg);
	
	/*
	multi line comment
	lmao skill issue
	*/
	//single line comment lmao skill issue
	
	char gojo;
	printf("\nSo now we want to yap, say 'G': ");
	scanf("%c", &gojo);
	
	if (gojo == 'G') {
		printf("You alone are the honoured one.");
	}
	else {
		printf("Blud is blind lol");
	}
	
	//alr now we gon do quadratic again
	float A, B, C;
	printf("Coefficient of x^2 is: ");
	scanf("%f", &A);
	printf("Coefficient of x is: ");
	scanf("%f", &B);
	printf("Constant is: ");
	scanf("%f", &C);

	if ((B*B-4*A*C) >= 0) {
		printf("The roots are %lf and %lf", (-b-sqrt(b*b - 4*a*c) )/2*a, (-b+sqrt(b*b - 4*a*c) )/2*a);
	}
	else {
		printf("Unreal roots");
	}
	
}
