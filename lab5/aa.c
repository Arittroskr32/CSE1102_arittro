#include<stdio.h>
int fact(int n){
    if(n!=0){
        return n*fact(n-1);
    }
    else return 1;
}
int main(){
    int n;
    printf("Number:");
    scanf("%d",&n);
    printf("Factorial is=%d",fact(n));
    return 0;
}