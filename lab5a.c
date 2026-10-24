/*#include <stdio.h>
#include <math.h>

// "PROTOTYPES"


float trig(float angle, int choicet);
float exps(float base, float power, int choicee);
float basic(float num1, float num2, int choiceb);
int menu(int choice);


int main() {
	int add(int a, int b) {
		int sum = a+b;
		return sum;
	}
	
	void printWelcomeMessage () {
/*		printf (" ========================================\ n") ;
		printf (" Welcome to the CS U111 Lab ! \n") ;
	 	printf (" ========================================\ n") ;	
		
	}

	add();
	
//	int calculateArea (int , int ) ;

	menu();
	
	
	
	
	
	
	
	
	
	
	return 0;	
}


int menu(int choice){
	printf("--- MAIN MENU ---\nWelcome to calculator.\nSelect an option:\n1. Basic Arithemetic\n2. Trigonometery\n3. Exponentials\n 4. Exit\n Select the number: ");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			basic();
			break;
		case 2:
			trig();
			break;
		case 3:
			exps();
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid input: Exiting calculator");
			
	}
}

float trig(float angle, int choicet){
	printf("--- TRIGONOMETERY ---\nWelcome to calculator.\nSelect an option:\n1. Sine\n2. Cosine\n3. Tangent\n 4. Exit\n Select the number: ");
	scanf("%d", &choicet);
	
	switch (choicet) {
		case 1:
			basic();
			break;
		case 2:
			trig();
			break;
		case 3:
			exps();
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid input: Exiting calculator");
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// --- Function Prototypes for Menus ---
void mainMenu(void);
void arithmeticMenu(void);
void trigonometryMenu(void);
void exponentialsMenu(void);

// --- Function Prototypes for Mathematical Operations ---
double addNumbers(double a, double b);
double subtractNumbers(double a, double b);
double multiplyNumbers(double a, double b);
double divideNumbers(double a, double b);
double calculateSine(double x);
double calculateCosine(double x);
double calculateTangent(double x);
double calculatePower(double base, double exponent);
double calculateSquareRoot(double x);
double calculateExponential(double x);
double calculateNaturalLog(double x);

// The main function acts only as the central coordinator
int main(void) {
    mainMenu();
    return 0;
}

// --- Menu Functions Implementation ---

void mainMenu(void) {
    int choice;
    while (1) {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Basic Arithmetic\n");
        printf("2. Trigonometry\n");
        printf("3. Exponentials\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                arithmeticMenu();
                break;
            case 2:
                trigonometryMenu();
                break;
            case 3:
                exponentialsMenu();
                break;
            case 4:
                printf("Exiting calculator. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please select a valid option (1-4).\n");
        }
    }
}

void arithmeticMenu(void) {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n--- BASIC ARITHMETIC MENU ---\n");
        printf("1. Addition (a + b)\n");
        printf("2. Subtraction (a - b)\n");
        printf("3. Multiplication (a * b)\n");
        printf("4. Division (a / b)\n");
        printf("5. Return to Main Menu\n");
        printf("Select an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 5) {
            return; // Return to the caller (mainMenu)
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1:
                result = addNumbers(num1, num2);
                printf("Result: %f\n", result);
                break;
            case 2:
                result = subtractNumbers(num1, num2);
                printf("Result: %f\n", result);
                break;
            case 3:
                result = multiplyNumbers(num1, num2);
                printf("Result: %f\n", result);
                break;
            case 4:
                if (num2 == 0.0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    result = divideNumbers(num1, num2);
                    printf("Result: %f\n", result);
                }
                break;
            default:
                printf("Invalid choice. Please select a valid option (1-5).\n");
        }
    }
}

void trigonometryMenu(void) {
    int choice;
    double angle, result;

    while (1) {
        printf("\n--- TRIGONOMETRY MENU ---\n");
        printf("1. Sine (sin(x))\n");
        printf("2. Cosine (cos(x))\n");
        printf("3. Tangent (tan(x))\n");
        printf("4. Return to Main Menu\n");
        printf("Select an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 4) {
            return;
        }

        if (choice >= 1 && choice <= 3) {
            printf("Enter angle in radians: ");
            scanf("%lf", &angle);
        }

        switch (choice) {
            case 1:
                result = calculateSine(angle);
                printf("Result: %f\n", result);
                break;
            case 2:
                result = calculateCosine(angle);
                printf("Result: %f\n", result);
                break;
            case 3:
                result = calculateTangent(angle);
                printf("Result: %f\n", result);
                break;
            default:
                printf("Invalid choice. Please select a valid option (1-4).\n");
        }
    }
}

void exponentialsMenu(void) {
    int choice;
    double val1, val2, result;

    while (1) {
        printf("\n--- EXPONENTIALS MENU ---\n");
        printf("1. Power (x^y)\n");
        printf("2. Square Root (sqrt(x))\n");
        printf("3. Exponential (e^x)\n");
        printf("4. Natural Logarithm (ln(x))\n");
        printf("5. Return to Main Menu\n");
        printf("Select an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 5) {
            return;
        }

        switch (choice) {
            case 1:
                printf("Enter base (x): ");
                scanf("%lf", &val1);
                printf("Enter exponent (y): ");
                scanf("%lf", &val2);
                result = calculatePower(val1, val2);
                printf("Result: %f\n", result);
                break;
            case 2:
                printf("Enter number (x): ");
                scanf("%lf", &val1);
                if (val1 < 0) {
                    printf("Error: Cannot calculate square root of a negative number.\n");
                } else {
                    result = calculateSquareRoot(val1);
                    printf("Result: %f\n", result);
                }
                break;
            case 3:
                printf("Enter exponent (x): ");
                scanf("%lf", &val1);
                result = calculateExponential(val1);
                printf("Result: %f\n", result);
                break;
            case 4:
                printf("Enter number (x): ");
                scanf("%lf", &val1);
                if (val1 <= 0) {
                    printf("Error: Natural logarithm is undefined for zero or negative numbers.\n");
                } else {
                    result = calculateNaturalLog(val1);
                    printf("Result: %f\n", result);
                }
                break;
            default:
                printf("Invalid choice. Please select a valid option (1-5).\n");
        }
    }
}

// --- Mathematical Operation Functions Implementation ---

double addNumbers(double a, double b) {
    return a + b;
}

double subtractNumbers(double a, double b) {
    return a - b;
}

double multiplyNumbers(double a, double b) {
    return a * b;
}

double divideNumbers(double a, double b) {
    return a / b;
}

double calculateSine(double x) {
    return sin(x);
}

double calculateCosine(double x) {
    return cos(x);
}

double calculateTangent(double x) {
    return tan(x);
}

double calculatePower(double base, double exponent) {
    return pow(base, exponent);
}

double calculateSquareRoot(double x) {
    return sqrt(x);
}

double calculateExponential(double x) {
    return exp(x);
}

double calculateNaturalLog(double x) {
    return log(x);
}

