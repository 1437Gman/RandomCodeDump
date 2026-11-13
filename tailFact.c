#include <stdio.h>

int tailFactorial(int n, int accumalator);

int main()
{   
    int n;
    
    //int ans = tailFactorial(scanf("%d"),1);
    
    scanf("%d",&n);
    int ans = tailFactorial(n,1);
    
    printf("%d    %d",n,ans);

    return 0;
}

int tailFactorial(int n, int accumalator){
    if (n==0){
        return accumalator;
    }
    
    return tailFactorial(n-1,n*accumalator);
}
