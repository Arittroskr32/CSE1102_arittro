#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,i,j,temp,n;
    printf("How many numbers:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",a+i);
    }
    for ( i = 1; i <n; i++)
    {
        for ( j = 0; j<=n-i; j++)
        {
            if(*(a+j)>*(a+j+1)){
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }  
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",*(a+i));
        printf("\t");
    }
    free(a);
    return 0;
}