#include<stdio.h>
int main(){
    int n,swap;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("Enter %d element",n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The element in reverse order\n");
    for (int i = 0,j=n-1; i <=n/2; i++,j--)
    {
        swap=arr[i];
        arr[i]=arr[j];
        arr[j]=swap;
    }
    for (int i = 0,j=n-1; i < n; i++,j--)
    {
        printf("Element[%d] = %d\n",j,arr[i]);
    }
    
    return 0;
}