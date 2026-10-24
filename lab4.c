# include <stdio.h>
# include <stdbool.h>

int main() {
	int count=0;
	int integer=0;
	while (count<5) {

		printf("I'm sorry");
		count++;
	}
	count=0;
	do {
		printf("\nI have the time stone and the patience of Doctor Strange. Choose a +ve integer: ");
		scanf("%d",&integer);
		} while (integer<=0);
		
	//

	bool someOtherFlag = true ;
	for (int i = 5; i < 200 && someOtherFlag ; i *= 2) {
		printf (" Hello \n") ;
	}

	int value;
	value++;
	printf("%d",value);




	//P1

	int num;
	printf("\nEnter the number: ");
	scanf("%d", &num);

	int d, sum, rev, t;
	t = num;
	while (t>0) {
		d++;
		sum+= t%10;
		rev = rev*10 + t%10;
		t/=10;
	}

	printf("%d %d %d", d, sum, rev);
	
	//P2 solved mentally
	//P3
	
	
	printf("\nEnter the number: ");
	scanf("%d", &num);
	int bw = num;
	
	while(bw/10>0){
		bw=bw%10;
		bw/=10;
		printf("%d",bw);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	//P5
	int target;
	printf("\nEnter the number from 1 to 1000: ");
	scanf("%d", &target);
	int lb=1;
	int ub=1000;
	int guess= (lb + ub)/2;
	count = 0;
	
	while (target!=guess){
		guess= (lb + ub)/2;
		count++;
		printf("\nMy guess is: %d", guess);
		if(target<guess){
			printf("\nToo high!");
			if(guess<ub){
				ub=guess;
			}
		} else if (target>guess){
			printf("\nToo low!");
			if (guess>lb){
				lb=guess;
			}
			}
		else{
			printf("\nI have guessed the number! Taken %d guesses",count);
		}
	}
	
}
