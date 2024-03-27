#include<stdio.h>
int main(){
    int c=10;
    int *p=&c;
    printf("The output of c is: %d\n",c);
    printf("The output of &c is: %p\n",&c);
    printf("The output of p is: %p\n",p);
    printf("The output of *p is: %d\n",*p);
    printf("The output of &p is: %p\n",&p);
    return 0;
}