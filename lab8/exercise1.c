#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,*b,*c,n,sum;
    printf("Enter the size of two arrays:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    b=(int *)malloc(sizeof(int)*n);
    c=(int *)malloc(sizeof(int)*n);
    printf("Enter element");
    for (int i = 0; i < n; i++)
    {
        sum=0;
        printf("Enter array1 element. ");
        scanf("%d",a+i);
        printf("Enter array2 element. ");
        scanf("%d",b+i);
        sum=*(a+i)+*(b+i);
        *(c+i)=sum;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(c+i));
        printf("\t");
    }
    free(a);
    free(b);
    free(c);
    return 0;
}