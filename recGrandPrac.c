#include <stdio.h>

int fact(int n);
int tailFact(int n, int CAns);	//current answer

int fib(int n);
int tailFib(int n, int i, int S);

int tailOddEven(int n, int a, int b);


int main () {
	int n;
	printf("Enter number to be factorialized: ");
	scanf("%d",&n);
	
	int facta = fact(n);
	
	int factb = tailFact(n,1);
	
	printf("\n\nRegular recursion delivered %d, tail recursion delivered %d.\n\nRecursion counts runs back each previous step, pausing the previous call. In the regular the recursive calling line is:\n\nreturn n*fact(n-1)\n\nIn this, the multiplication HAS to be done after fact(n-1) is calculated, so the callstack HAS to pause till lower case value is returned.\n\nFor tail factorial, the call line is\n\nreturn tailFact(n-1,n*accumaltor);\n\nThe multiplication is done first. Therefore, the computer can see the complete and final function before the calling of the lower case. This allows a 'smart' compiler like gcc (using TCO/tail call optimization) to deadass predict all lower case values starting bottom up. Because it's not finding the value before completing the function, it can predict and start backward. Genuine bs lmao.\n\n\n",facta,factb);
	
	printf("TLDR: tailFact completes all operations before calling another iteration of itself. This allows the compiler to just drop the iteration completed and use the same memory to run the next iteration.\n\nSo when it reaches n==0 the answer is literally the accumalator by design.\n\nTakes lesser time ans way lesser space (for the computer not for us lol)\n\nAlso this explanation is literally more correct than the previous, ignore the previous yap.\n\n");
	
	int input;
	
	printf("\nWhat eth term of the fibonacci do you want to calculate? ");
	scanf("%d",&input);
	
	int fiba = fib(input);
	int fibb = tailFib(input-2, 0, 1);	//I mean idt they'll make it input -2 anywhere, I just was like "well technically I wanna say the first term is 0 right :_D
	printf("\n\nI'll be real with you, this one is little hard since you normally call fibonacci inside itself twice to solve via recursion. Bear with me.\n\nI'm going to try this (I used gemini like 3hrs ago, let's see how much I can still remember logic of)\n\n	1) I need an accumalator, but we also need to store a value other than n-1 (n-2), so I think 3 parameter function will be required here\n\n	2) If I have (n, a, b) Where a is let's say smaller one, so like first one is (n, 0, 1) then we need to go to (n-1, x, y)\n\nBut one of them needs to accumalate summation somehow. 5, 3, 2, 1, 1, 0. So I add the previous one to it each time?\n\n\nI'm thinking it looks like 2=1+1, we keep the 1 in b cuz we need it next time, but then next time we will need to keep 2...\nSo we keep b into a and we keep the current sum into b, so b is always the larger number and we don't need to do swappy swappies...\n\nK so here fib gives %d and tailFib gives %d.", fiba, fibb);
	
	printf("\n\nUnfortunately it felt like I remembered the complete logic instead of constructing it myself. Eh we'll try another one, maybe even odd..\n\n");
	
	//You have no idea how much easier it feels when indexing doesn't have to look cool
	
	printf("KID YOU NOT, I GOT IT MYSELF\n\n\nEnter odd even checkable: ");
	scanf("%d",&input);
	
	int state=tailOddEven(input, 0, 1);
	
	if (state ==1) {			//Brackets necess even if 1 condition btw (fair enough, now that yk it's a function)
		printf("Even");
	}
	if (state == 0) {
		printf("Odd");
	}
	
	//BTW, incase ur ever left wondering,
	
	/*
	type ogFunc (parameter) {
		ogFuncHelper(paramter, gayParameter);
	}
	
	typeb ogFuncHelper (parameter, gayParameter) {
		literally the entire valid part;
	}
	*/
	
	//purpose: int main looks nice to user (deadass)
	
	
	
	
	return 0;
	
}

int fact(int n) {
	if (n==0) {
		return 1;
	}
	
	return n*fact(n-1);
}

int tailFact(int n, int CAns) {
	if (n==0) {
		return CAns;
	}
	
	return tailFact(n-1,n*CAns);
	//we're essentially sending the ans up (down) each recursion directly
	
}

int fib(int n) {
	if (n==1){
		return 0;
	}
	if (n==2) {
		return 1;
	}
	
	return fib(n-1) + fib(n-2);
	
}

int tailFib(int n, int i, int S) {
	if (n==-1){
		return i;
	}
	if (n==0){
		return S;
	}
	
	return tailFib(n-1,S,i+S);
	
}

int tailOddEven(int n, int a, int b){
	if (n==0){
		return b;
	}
	
	return tailOddEven(n-1,b,a);
	
}
