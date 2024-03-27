#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,*b,*max;
    a=(int *)malloc(sizeof(int));
    b=(int *)malloc(sizeof(int));
    printf("a is=");
    scanf("%d",a);
    printf("b is=");
    scanf("%d",b);
    if(*a>*b) max=a;
    else max=b;
    printf("Maximum is:%d",*max);
    free(a);
    free(b);
    return 0;
}