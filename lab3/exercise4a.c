#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
    col = row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = col; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        col--;
    }
    return 0;
}