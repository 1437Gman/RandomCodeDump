#include <stdio.h>

void print_grid(int n);
void print_row(int i, int n);

int main (){
    int n;
    scanf("%d",&n);
    
    print_grid(n);
    
    return 0;
}

void print_grid(int n){
    if (n<1 || n>9) {
        printf("Invalid");
        return;
    }
    int i=1;
    for (;i<=n;i++) {
        print_row(i,n);
        printf("\n");
    }
}

void print_row(int i, int n) {
    for (int j = 0; j < 2*(i-1); j++) {
        printf(" ");
    }
    for (int j = i; j<=n; j++) {
        printf("%d ",j);
    }
    for (int j = 1; j<i; j++) {
        printf("%d ", j);
    }
}
