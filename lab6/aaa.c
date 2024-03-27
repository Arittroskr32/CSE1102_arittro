#include<stdio.h>
void change(int x,int y){
    int swap=x;
    x=y;
    y=swap;
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before change..\n");
    printf("The value of a is:%d & value of b is:%d\n",a,b);
    change(a,b);
    printf("After change..\n");
    printf("The value of a is:%d & value of b is:%d\n",a,b);
    return 0;
}