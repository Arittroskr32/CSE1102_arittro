#include<stdio.h>
long long int valuenPr(int n,int r){
    long long int result=1,a=1,b=1;
    for (int i = 1; i <=n; i++)
    {
        a*=i;
    }
    for (int i = 1; i <=n-r; i++)
    {
        b*=i;
    }
    return a/b;
}
int main(){
    int n,r;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&n,&r);
    printf("value of nPr is:%lld\n",valuenPr(n,r));
    return 0;
}