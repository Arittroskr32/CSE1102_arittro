#include<stdio.h>
int max(int x,int y){
    int m;
    if(x>=y){
        m=x;
    }
    else{
        m=y;
    }
    return m;
}
int main(){
    int a,b,c,d;
    printf("Enter the 4 ages: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int m1=max(a,b);
    int m2=max(c,d);
    printf("the maximum age is :%d\n",max(m1,m2));
    return 0;
}