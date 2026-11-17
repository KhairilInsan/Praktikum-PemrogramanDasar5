#include <stdio.h>

int main()
{
    int n, A[50][50], B[50][50], C[50][50];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
            printf("%d", C[i][j]);
            if (j < n - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
