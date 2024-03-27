#include<stdio.h>
int is_primenum(int n){
    if(n==2){
        return 1;
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if(n%i==0){
                return 0;
                break;
            }
            if(i==n-1){
            return 1;
            }
        }
    }
}
int main(){
    int n,count=0,count2=0,a;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if((arr[i])%2!=0){
            count++;
        }
        a=is_primenum(arr[i]);
        if(a==1){
            count2++;
        }
    }
    printf("The number of odd elements in array : %d\n",count);
    printf("The number of prime numbers in array : %d\n",count2);
    return 0;
}