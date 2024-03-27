#include<stdio.h>

int main(){
    int n,large=-10000;
    printf("Enter the numbers of element\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=large){
            large=arr[i];
        }
    }
    printf("The largest number is : %d",large);
    return 0;
}