#include <stdio.h>

// P2 Function
void P2 () {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    
    int P2Arr[N];
    
    // 1. Input elements
    for (int i = 0; i < N; i++) { 
        scanf("%d", &P2Arr[i]);
    }
    
    // 2. Calculate Sum
    double sum = 0;
    for (int i = 0; i < N; i++) { 
        sum = sum + P2Arr[i];
    }
    
    // 3. Calculate Average
    double avg = sum / N;
    
    // 4. Find Minimum
    int minimum = P2Arr[0]; 
    for (int i = 0; i < N; i++) { 
        if (minimum > P2Arr[i]) {
            minimum = P2Arr[i];
        }
    }
    
    // 5. Find Maximum
    int max = P2Arr[0]; 
    for (int i = 0; i < N; i++) { 
        if (max < P2Arr[i]) {
            max = P2Arr[i];
        }
    }
    
    // 6. Print Results
    printf("Average: %.2f\n", avg);
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", max);
}

int main () {
    //P2();
    int square[3][3];
    
    for (int i = 0; i < 3 ; i ++) {
		for (int j = 0; j < 3 ; j ++) {
			printf ("%d ", square[ i ][ j ]);
		}

		printf ("\n") ;
	}
    return 0;
}

