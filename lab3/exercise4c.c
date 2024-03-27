#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
    col = row;
    for (int i = 1; i <= row; i++)
    {
        int s = 1;
        for (int j = col; j >= 1; j--)
        {
            for (; s <= col; s++)
            {
                printf("%d ", s);
            }
        }
        printf("\n");
        col--;
    }

    return 0;
}