#include<stdio.h>
int main(){
    int x1,x2,sum=0;
    printf("Enter upper limit:\n");
    scanf("%d",&x1);
    printf("Enter lower limit:\n");
    scanf("%d",&x2);
    printf("Numbers which are devided by 3 are:\n");
    for (int i = x2; i <= x1; i++)
    {
        if(i%3==0){
            printf("%d ",i);
            sum=sum+i;
        }
    } 
    printf("\nSum is: %d\n",sum);
    return 0;
}