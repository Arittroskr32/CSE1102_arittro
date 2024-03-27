#include<stdio.h>
void rectangle(float a, float b){
    float area= a*b;
    float perimeter =2*(a+b);
    printf("Area of rectengle is : %.2f\n",area);
    printf("perimeter of rectengle is : %.2f\n",perimeter);
}
int main(){
    float h,b;
    printf("Enter the base and the height of rectangle:\n");
    scanf("%f %f",&b,&h);
    rectangle(b,h);
    return 0;
}