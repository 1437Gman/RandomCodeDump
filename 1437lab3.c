#include <stdio.h>
#include <math.h>

int main() {
/*	int divider = 2;
	double num;
	double quot;
	int ans = 0;
	printf("Enter the number:\n");
	scanf("%lf",&num);
	while (num>divider) {
		quot = num/divider;
		
		//printf("%lf",quot);
		if ((quot-(int)(quot))==0){
			ans = ans+1;
		}
		//modulo operator can only use integer on both sides
		divider=divider+1;
	}
	if (ans>0){
		printf("Number is composite\n");
	} else if ((num!=1 || num!=0) && ans==0){
		printf("Number is prime\n");
	} else {
		printf("Number is neither prime nor composite\n");
	}*/
	
//This code is giving everything composite FIXED	
	
/*	int divider = 2;
	int num;
	int ans = 0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while (num>divider) {
		
		
		if ((num%divider)==0){
			ans = ans+1;
		}
		//modulo operator can only use integer on both sides
		divider=divider+1;
	}
	if (ans>0){
		printf("Number is composite\n");
	} else if ((num!=1 || num!=0) && ans==0){
		printf("Number is prime\n");
	} else {
		printf("Number is neither prime nor composite\n");
	}
	
*/	


//P1
	int value;
	printf("Enter the value:\n");
	scanf("%d",&value);
	if (((value/2)%1)==0 && value>0) {
		printf("Positive even\n");
	} else if (((value/2.0)-(value/2))==0 && value<0) {
		printf("Negative even\n");
	} else if (((value/2.0)-(value/2))!=0 && value>0) {
		printf("Positive odd\n");
	} else if (((value/2.0)-(value/2))!=0 && value<0) {
		printf("Negative odd\n");
	} else {
		 printf("Origin or 0\n");
	}
	
//P2
	int choice;
	printf("If age is below 5 years, choose 1. 5-12 years? Choose 2. 13-59 years? Choose 3. 60 or above? Choose 4.\n");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			printf("Free");
			break;
		case 2:
			printf("120 INR");
			break;
		case 3:
			printf("200 INR");
			break;
		case 4:
			printf("150 INR");
			break;
	
	}
	
//P4
	double weight, height, BMI;
	
	printf("Enter weight in kg:\n");
	scanf("%lf",&weight);
	printf("Enter height in metres:\n");
	scanf("%lf", &height);
	
	BMI= weight/(height*height);
	printf("%lf",BMI);
	
	if (BMI<18.5){
		printf("Underweight");
	} else if (BMI>=18.5 && BMI <25){
		printf("Normal");
	} else if (BMI<30){
		printf("Overweight");
	} else {
		printf("Obese");
	}

//P3 skip
//P5
	int a, b, c;
	printf("Enter three side lengths:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if (a!=b && b!=c && c!= a) {
		printf("Scalene");
	} else if (a==b && b==c) {
		printf("Equilateral");
	} else {
		printf("Isosceles");
	}
	
//P6
	int choice1, choice2;
	printf("Choose 1 for scissors, 2 for paper, 3 rock. First player 1, then player 2.");
	scanf("%d",&choice1);
	scanf("%d",&choice2);
	switch (choice1) {
		case 1:
			if (choice2==1){
				printf("Draw");
			} else if (choice2 == 2){
				printf("Player 1 wins");
			} else {
				printf("Player 2 wins");
			}
			break;
		case 2:
			if (choice2==2){
				printf("Draw");
			} else if (choice2 == 3){
				printf("Player 1 wins");
			} else {
				printf("Player 2 wins");
			}
			break;
		case 3:
			if (choice2==3){
				printf("Draw");
			} else if (choice2 == 1){
				printf("Player 1 wins");
			} else {
				printf("Player 2 wins");
			}
			break;
		default:
			printf("Invalid input");
			
		}














	return 0;
}
