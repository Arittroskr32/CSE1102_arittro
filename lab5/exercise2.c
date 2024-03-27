#include<stdio.h>
int difference(int x, int y){
    int diff;
    if(x>=y){
        diff=x-y;
    }
    else{
        diff=y-x;
    }
    return diff;
}
int main(){
    int a,b;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&a,&b);
    printf("Difference is :%d\n",difference(a,b));
    return 0;
}