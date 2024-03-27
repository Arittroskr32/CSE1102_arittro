#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%5==0){
        printf("%d is divided by 5\n",a);
    }
    else{
        printf("%d is not divided by 5\n",a);
    }

    return 0;
}