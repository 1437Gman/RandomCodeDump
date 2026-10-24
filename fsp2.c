//ok so in this 1 I will try and explain a bit more

# include <stdio.h>
# include <math.h>


//global variable call here: Can be used in all functions.
int larpScore = 0;


void protoample ();
void funcChooser (int choice);
//This is an example of a prototype, it is pre-promising a function defined at some point after it is called.
//In the brackets you will have to mention any parameters

//The value you keep in the parameter is called argument

int main () {
	int choice=0;
	while (choice!=5){
		protoample();
		printf("Choose one of the below (by number):\n1) Add\n2)Subtract\n3)Modulo\n4) Hear a fact\n5)Exit\n\n-->");
		scanf("%d", &choice);
		funcChooser(choice);
	
	}
	printf("\nYour larp score was %d. Goodbye", larpScore);
	
}

void protoample () {
	printf("\nThis code has been made to explain to myself how functions work by... creating it myself. Continue reading to understand.\nRecommended you see the code itself as well.\n");
	
}

float add () {
	float num1;
	printf("\nEnter number 1: ");
	scanf("%f", &num1);
	float num2;
	printf("\nEnter number 2: ");
	scanf("%f", &num2);
	
	return num1+num2;
	
}

float subtract () {
	float num1;
	printf("\nEnter number 1: ");
	scanf("%f", &num1);
	float num2;
	printf("\nEnter number 2: ");
	scanf("%f", &num2);
	
	return num1-num2;
	
}

int modulo () {
	int num1;
	printf("\nEnter number 1: ");
	scanf("%d", &num1);
	int num2;
	printf("\nEnter number 2: ");
	scanf("%d", &num2);
	
	return num1%num2;
	
}

void gojoQuote(); //notice the references in this line: "VOID" and Gojo stand alone
void funcChooser (int choice) { //same as 7
	switch (choice) {
		case 1:
			float ans = add();			//notice how I precollected "choice" for funcChooser, but wanted add and subtract to be self sufficient so they ask for their own variables witihin their execution
			printf("%f",ans);
			break;
		case 2:
			ans = subtract(); //diff switch condition so ans is new var IS NOT HOW IT WORKS
			printf("%f",ans);
			break;
		case 3:
			ans = modulo(); //reference lol
			printf("%f",ans);
			larpScore= larpScore+50;
			break;
		case 4:
			gojoQuote();
			break;
		case 5:
		default:
			return;			//clever use of no break, also return can be used on void in this way
		
	}
		
}

void gojoQuote () {
	printf("Throughout Heaven and Earth, I alone am The Honoured One.");
	//Yes I'm bragging
	larpScore= larpScore+500;
}
		
	
	
