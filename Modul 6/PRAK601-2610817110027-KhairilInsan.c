#include <stdio.h>

int main()
{
    int row, column, number[100];
    scanf("%d %d", &row, &column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            scanf("%d", &number[i * column + j]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", number[i * column + j]);
        printf("\n");
    }

    return 0;
}