#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=(a<b)?a:b;
    printf("%d is the minimum number.\n",c);
    return 0;
}