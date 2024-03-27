#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter 1st numbers :");
    scanf("%d",&a);
    printf("Enter 2nd numbers :");
    scanf("%d",&b);
    printf("Operation to be performed(+,-,*,/): \n");
    scanf(" %c",&ch);
    switch(ch){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        default:
        printf("Not a valid sign to perform\n");
    }

    return 0;
}