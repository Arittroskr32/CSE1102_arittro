#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n,*fib;
    printf("Enter the size of fibonacci numbers:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    int t1 = 0, t2 = 1;
    *a = t1 + t2;
    printf("Fibonacci Series: %d\t%d\t", t1, t2);
    for (int i = 3; i <= n; ++i) {
        printf("%d\t",*a);
        t1 = t2;
        t2 = *a;
        *a = t1 + t2;
    }
    free(a);
    return 0;
}