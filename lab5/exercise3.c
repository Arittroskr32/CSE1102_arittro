#include<stdio.h>
long long int powerreturn(int a, int b){
    long long int k=1;
    for (int i = 1; i <=b; i++)
    {
        k=k*a;
    }
    return k;
}
int main(){
    int x,y;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&x,&y);
    printf("value is :%lld",powerreturn(x,y));
    return 0;
}