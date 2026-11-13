#include <stdio.h>


//global variables
int x; int y; int z;

//preset callable functions

void DurCheck(int durability) {		//durInput also works but saves separately
	if (durability<=150){
		printf("Yowaimo");
	} else if (durability<=350){
		printf("Stand proud. You are strong.");
	} else {
		printf("Sukuna will need Big Raga for this");}
}
char TempUniConv() {
	char tempType;
	printf("Type the single character symbol of the temperature you choose");
	scanf(" %c", &tempType);
	
	/*The space in the format string doesn't require you to type a space when entering input. It means "skip any (zero or more) whitespace characters — spaces, tabs, newlines — that happen to be sitting in the buffer before reading the next character."
	Why doesn't this bite %d and %lf?

Because %d, %lf, %f, %e, %g, etc. automatically skip leading whitespace before they start matching, as part of how those conversion specifiers work*/

	//return also acts as break so keep patience
	
	double temp;
	if (tempType=='F'){
	/*VERY IMPORTANT
	Double quote on character doesn't work since:
	Even though you only typed one letter, the computer automatically allocates space for two characters in memory. It places your character first, and immediately follows it with a hidden character called a null terminator (\0), which tells the computer "this is the end of the text string".*/
		printf("Enter temperature");
		scanf("%lf",&temp);
		printf("This temperature in C is %lf and in K is %lf", (5*temp-32)/9, (5*temp-32)/9 + 273);
	} else if (tempType=='C'){
		printf("Enter temperature");
		scanf("%lf",&temp);
		printf("This temperature in F is %lf and in K is %lf", 9*temp/5 +32, temp + 273);
	} else if (tempType=='K'){
		printf("Enter temperature");
		scanf("%lf",&temp);
		printf("This temperature in C is %lf and in F is %lf", temp+100, 9*(temp-273)/5 +32);
	} else {
		printf("Invalid input");
	}
	return tempType;
}

int main () {
	int exitcheck = 0;
	int input;
	while (exitcheck==0){
		printf("\nHello there! What do you want to do with this mainrun?\n1. Test durability\n2. Convert temperature\n3. Exit");
		scanf("%d",&input);
		if (input==1){
			int durInput;
			printf("\nEnter durability rating: ");
			scanf("%d",&durInput);
		
			DurCheck(durInput);
		} else if (input==2){
			TempUniConv();
		} else if (input == 3){
			printf("\nExiting");
			exitcheck++;
		} else {
			printf("\nInvalid input. Try again");
		}
	}
	return 0;
}	
		
		
	
