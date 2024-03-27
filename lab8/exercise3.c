#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,*b,*add,*mul,col,row,p;
    printf("Enter the column of matrix");
    scanf("%d",&col);
    printf("Enter the row of matrix");
    scanf("%d",&row);
    a=(int *)malloc(sizeof(int)*col*row);
    b=(int *)malloc(sizeof(int)*col*row);
    printf("Enter 1st matrix elements.");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            scanf("%d",&p);
            *(a + i*col + j)=p;
        } 
    }
    printf("Enter 2nd matrix elements.");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            scanf("%d",&p);
            *(b + i*col + j)=p;
        } 
    }
    printf("after addition");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            *(add + i*col + j) = *(a + i*col + j)+*(b + i*col + j);
            printf("%d",*(add + i*col + j));
        } 
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            printf("%d  ",*(add + i*col + j));
        } 
        printf("\n");
    }
    
    free(a);
    free(b);
    return 0;
}