#include<stdio.h>
int main(){
    int n,large1=-10000,large2=-10000;
    printf("Enter the numbers of element\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=large1){
            large1=arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=large1){
            if(arr[i]>=large2){
                large2=arr[i];
            }
        }
    }
    
    printf("The 1st largest number is : %d\n",large1);
    printf("The 2nd largest number is : %d\n",large2);
    return 0;
}