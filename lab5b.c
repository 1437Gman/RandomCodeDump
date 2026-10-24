# include <stdio.h>
#include <math.h>

// This function attempts to change the value of the input it receives
void modifyValue (int x ) {
	printf ("[ Callee ] Received x = %d\n", x ) ;
// Changing the parameter 'x' to a completely new number
	x = 100;
	printf ("[ Callee ] Changed x to %d inside the function \n", x ) ;
}

void ThermTest (int TTvar) {
	int count = 0;
	while (count<=10){
		TTvar = TTvar-(TTvar%10)-5;
		count++;
	}
	if (TTvar< 20) {
		printf("Thermal test failed\n");
		
	}else{
		printf("Thermal test successful\n");
	}
}

void KinTest(int KTvar){
	int count = 0;
	do {
		if (KTvar%2==0){
			KTvar=KTvar/2;
		}else{
			KTvar=KTvar-15;
		}
		count++;} while (count<11);
	if (KTvar< 30) {
		printf("Kinetic test failed\n");
		
	}else{
		printf("Kinetic test successful\n");
	}
}
int main () {
	int x = 10;
	int dur;
	printf("Enter durability rating: ");
	scanf("%d", &dur);
	
	ThermTest(dur);
	KinTest(dur);
	
	

	//printf ("[ Caller ] Before function call , a = %d\n", x ) ;
// Calling the function and passing the variable 'a'
	//modifyValue ( x ) ;
	// What will 'a' be now ? 10 or 100?
	//printf ("[ Caller ] After function call , a = %d\n", x) ;
	
	//IN THIS INDIVIDUALLY COMMENTED OUT CASE, IT IS ESSENTIALLY TREATED ASS TWO DIFFERENT VARIABLES, ONE OF WHICH IS LOCAL
	return 0;

}

//Diff b/w this and THIS:
/*# include < stdio .h >
2
3 // This function attempts to change the value of the input it receives
4 void modifyValue (int x ) {
5 printf ("[ Callee ] Received x = %d\n", x ) ;
6
7 // Changing the parameter 'x' to a completely new number
8 x = 100;
9
10 printf ("[ Callee ] Changed x to %d inside the function \n", x ) ;
11 }
12
13 int main () {
14 int a = 10;
15
16 printf ("[ Caller ] Before function call , a = %d\n", a ) ;
17
18 // Calling the function and passing the variable 'a'
19 modifyValue ( a ) ;
20
21 // What will 'a' be now ? 10 or 100?
22 printf ("[ Caller ] After function call , a = %d\n", a ) ;
23
24 return 0;
25 }*/


