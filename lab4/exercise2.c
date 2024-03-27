#include<stdio.h>
int main(){
    int n;
    float b,sum=0;
    printf("Enter the number of student:\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    b=sum/n;
    printf("Avarage class test marks = %.2f",b);
    return 0;
}