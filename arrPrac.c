#include <stdio.h>

void Q1 ();

int main() {
    Q1();

    return 0;
}

void Q1 () {
	int n;
    int arr[100]; // Array size up to 100 as per constraints

    // 1. Read the number of elements
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1);

    // 2. Read n integers into the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1);
    }

    // 3. Print the elements in the same order
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" "); // Print space between elements
        }
    }
    printf("\n");
    
}
