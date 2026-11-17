#include <stdio.h>

int main()
{
    int row, column, first[100], second[100];
    scanf("%d %d", &row, &column);

    if (row != column)
    {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    for (int i = 0; i < row; i++)
        scanf("%d", &first[i]);
    for (int i = 0; i < row; i++)
        scanf("%d", &second[i]);

    for (int i = 0; i < row; i++)
    {
        printf("%d", first[i] * second[i]);
        if (i < row - 1)
            printf(" ");
    }

    return 0;
}