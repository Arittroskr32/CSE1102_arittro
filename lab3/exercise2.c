#include<stdio.h>
int main(){
    int n,min=10000,i,a;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    for (i=1; i <=n; i++)
    {
        scanf("%d",&a);
        if(a<=min){
            min=a;
        }
    }
    printf("Minimum number is: %d",min);
    return 0;
}

