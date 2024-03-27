#include<stdio.h>
long long int factorial(int z){
    long long int result=1;
    for (int i = 1; i <=z; i++)
    {
        result*=i;
    }
    return result;
}
int main(){
    int n,r;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&n,&r);
    long long int a=factorial(n),b=factorial(r),c=factorial(n-r);
    printf("value of nPr is:%lld\n",a/c);
    printf("value of nCr is:%lld\n",a/(b*c));
    return 0;
}