#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if((arr[i])%2!=0){
            count++;
        }
    }
    printf("The number of odd elements in array : %d",count);
    return 0;
}