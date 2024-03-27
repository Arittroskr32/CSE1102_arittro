#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element going to be searched = ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            printf("### %d is found at position: %d",x,i+1);
        }
        else{
            printf("%d element is not in the array.",x);
            break;
        }
    }   
    return 0;
}