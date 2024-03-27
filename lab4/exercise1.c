#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("Enter %d element",n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The element in reverse order\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("Element[%d] = %d\n",i+1,arr[i]);
    }
    return 0;
}