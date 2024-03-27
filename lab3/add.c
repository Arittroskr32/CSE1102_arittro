#include<stdio.h>
int main(){
    int n,min1,min2=10000,i,a;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    for (i=1; i <=n; i++)
    {
        scanf("%d",&a);
        if(a<=min1){
            min1=a;
        }
    }
    printf("Minimum number is: %d",min);
    return 0;
}