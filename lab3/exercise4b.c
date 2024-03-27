#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
    col = row;
    for (int i = 1; i <= row; i++)
    {
        for (int col = 1; col <= i; col++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    

    return 0;
}