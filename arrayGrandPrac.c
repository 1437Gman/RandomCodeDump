//I just wanna make it clear I lost 90 minutes of work and I'm still coming back to do it again

//I don't know why I don't just give up honestly but here we are

//I found a random ss that saved like the first half an hour maybe, but I will do it again from the start since understanding from half and trying to do the same is kinda hard too

#include <stdio.h>
#include <math.h>

#include <stdbool.h>
/* This library introduces var type bool: true or false. (boolean is full name)

Printed by %d, true = 1, false = 0
Any non zero = ture*/

#include <string.h>
/*Literally the entire labsheet 7 pretty much

(not really, but almost)*/




//GLOBALS

const double pi = acos(-1);
//OR #define pi=acos(-1);
//acos from math.h


int main () {
    int SrNos[10];
    /*SrNos[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    This doesn't work cuz you can't edit the array all at once: An array is a collection of variables*/

    //Here SrNos[i]=i+1; You will see me use this idea to define it later

    double marks[] = {96.5, 88.75, 76.5, 92.5, 90.25, 78, 87.75, 72.75, 79.5, 66.5};
    
    //two diff ways of defining arrays
    
    //2D array ideas here

    //double marksCp[] = marks[]; is also another idea but this cannot be done by itself
    
    //length of an array
    
    //int L = sizeof(marks[])/sizeof(marks[0]); IS WROOONGGG
    
    int L = sizeof(marks)/sizeof(marks[0]);
    printf("%d\n",L);
    
    //TRAVERSING AN ARRAY
    for (int i= 0; i<L; i++) {
    	printf("%.2lf ",marks[i]);
    	printf("%d ",i); //exclude for any function you may keep
    }
    
    printf("\n");
    //printf("%d",i); Will not execute since you defined i INSIDE THE FUNCTION "FOR"
    
    //But we run the same test while two birding with our stone here:
    int i = -0; //idk y lol stfu
    for (i=0;i<L;i++){
    	SrNos[i]=i+1;
    	printf("%d", i);
    }
    printf("\n");
        
    //Lemme try more traversals
    for (i=0;i<L;i++){
    	printf("%d",SrNos[i]);
    }
    
    SrNos[3]=3;
    
    for (i=0;i<L;i++){
    	printf("%d ",SrNos[i]);
    }
    
    SrNos[3]=4;
    printf("\n");
        
    //COPYING ARRAYS
    double marksCp[L];
    for (i=0;i<L;i++){
    	marksCp[i]=marks[i];
    }
    
    
    //AvgOfDoubleArr
    double sum=0;
    for (i=0;i<L;i++){
    	sum+=marks[i];
    }
    double avg = sum/L;
    printf("Average of marks is %.3lf",avg);
    
    //REVERSAL
    for (i=0;i<L;i++){
    	printf("%.2lf ",marks[L-i-1]);
    	marksCp[i]=marks[L-i-1]; //yes flipped 1-2 is better
    }
    
    
    double max = marks[0];			//wrote int initially
    for (i=0;i<L;i++){
    	if (max<marks[i]){
    		max=marks[i];
    	}
    }
    
    //COUNTING NUMBER OF EVEN AND ODD INDEXES
    int oddi=0, eveni=0;
    for (i=0;i<L;i++){
    	if ( (i+1)%2==1){
    		oddi++;
    	}
    	else{
    		eveni++;
    	}
    }
    printf("%d %d %d",oddi,eveni,i+1); //jic u haven't realized the plot twist yet
    
    //FIND TARGET
    
    double target;
    int pos=-1;
    
    printf("Enter target: ");//highest known mark is 96.5, Srno4 is 92.5
    scanf("%lf", &target);
    
    /*You missed a comma , between the format specifier string ("%lf") and the address-of operator (&target).   Why the error looks so weird:Because the comma is missing, the C compiler treats the space between "%lf" (which decays to a char * pointer to its first character) and &target (a float * pointer) as implicit juxtaposition or token interpretation. Depending on how it parses it, it sees a binary operation involving a char * and a float (since target is a float) and complains that you cannot use the binary bitwise AND operator & between those types.*/
    
    for (i=0;i<L;i++){
    	if (marks[i]==target){
    		pos=i;
    		break;
    	}
    }
    
    if (pos==-1){
    	printf("Target not found");
    }
    else{
    	printf("Target found at SrNo %d",i+1);
    }
    
    //BINARY SEARCH
    //DEAPTH ALERT: It is for arranged arrays
    int l=0,r=L-1,m;
    pos=-1;
    int t;
    printf("Enter target SrNo: ");
    scanf("%d",&t);
    
    
    //while (l!=r) { DOES NOT WORK! Check for 4 if you want
    while (l<=r) {
    	m=l+(r-l)/2;
    	
    	if (t>=1&&t<=L){
	    	if (t==m+1){
	    		pos=m;
	    		break;
	    	}
	    	else if (t<m+1){
	    		r=m-1;
	    	}
	    	else {
	    		l=m+1;
	    	}
	}
	else {
		break;
	}
    }
    if (pos==-1){			//I wrote pos =-1 yest and just slept lol bruh (in BOTH targets lmao)
    	printf("Target not found");
    }
    else{
    	printf("Target found at SrNo %d",pos+1);		//copied the i+1 as well
    }
    
    
    //BUBBLE SORT
    int numbers[] = {5,2,8,1,3,7,2};
    
    int n = sizeof(numbers)/sizeof(numbers[0]);
    
    for (i = 0; i < n- 1; i++) {
    	for (int j = 0; j < n- 1- i; j++) {
    		for (int k = 0; k<n; k++){
    			printf("%d ", numbers[k]);
    		}
    		
    		printf("\n");
    		
    		if (numbers[j] > numbers[j + 1]) {
    			int temp = numbers[j];
    			numbers[j] = numbers[j + 1];
    			numbers[j + 1] = temp;
    		
		}
	}
    }
    
    //NOTEABLE
    int gbar[10] = {2,5}; //2 5 0 0 0 0...
    
    //MARK HISTOGRAM
    //EZ
    
    //TWO
    //DIMENSIONAL
    //ARRAYS
    
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    //array of arrays
    
    //mat[r][c]
    //Running without initializing GENUINELY gives random ash numbers
    
    //Initializing originally with any few vals makes remaining 0, since comp assumes ig, but no initialization when ogly making array results in garbage values
    
    //Since "Assigned? Y/N" (don't think too much if not making sense lol)
    
    for (i=0; i<3; i++){
    	for (int j=0; j<4; j++){
    		printf("%d ",matrix[i][j]);
    	}
    	
    	printf("\n");
    }
    
    int A[3][3] = {{1,2},{0,3}};  //YES fr ts works 
    int B[3][3] = {{3,5},{0,0,1},{2}};
    int C[3][3];
    
    for (i=0; i<3; i++){
    	for (int j=0; j<3; j++){
    		C[i][j]=A[i][j] +B[i][j];
    	}
    	
    }
    
    for (i=0; i<3; i++){
    	for (int j=0; j<3; j++){
    		printf("%d ",C[i][j]);
    	}
    	
    	printf("\n");
    }
	
    //D=EF
    
    // 1. Initialize dimension variables
    int rowsE = 4;
    int colsE = 3;
    int rowsF = 3;
    int colsF = 4;

    // 2. Initialize E[4][3] completely with single-digit whole numbers
    int E[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {0, 1, 2}
    };

    // 3. Initialize F[3][4] completely with single-digit whole numbers
    int F[3][4] = {
        {3, 2, 1, 0},
        {6, 5, 4, 3},
        {9, 8, 7, 6}
    };

    // 4. Declare D[4][4] and initialize it to 0
    int D[4][4] = {0};

    // 5. Matrix Multiplication using the dimension variables
    // E(rowsE x colsE) * F(rowsF x colsF) = D(rowsE x colsF)
    for (i = 0; i < rowsE; i++) {
        for (int j = 0; j < colsF; j++) {
            for (int k = 0; k < colsE; k++) { // Can also use rowsF here since colsE == rowsF
                D[i][j] += E[i][k] * F[k][j];
            }
        }
    }

    // 6. Print the resulting D matrix to verify
    printf("Resultant Matrix D[4][4]:\n");
    for (i = 0; i < rowsE; i++) {
        for (int j = 0; j < colsF; j++) {
            printf("%4d ", D[i][j]);
        }
        printf("\n");
    }
    
    //This part is gemini yes
    
    //From here, we would get into practice problems of multidimensionals BUT LATTTERRRR SUCCKKAAAA
    
    
}
    //There are currently errors, check them out later
    /* This is infact one of the errors: The framing is quite key to the understanding of functions so I thought I'll make you read lmao
    
    arrayGrandPrac.c:56:17: error: ‘i’ undeclared (first use in this function)
    
    */
    
    //Currently neither target function is working. FIXED YES
    
    
