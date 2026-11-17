#include <stdio.h>

int main()
{
    int room, zetsu[100];
    scanf("%d", &room);

    for (int i = 0; i < room; i++)
        scanf("%d", &zetsu[i]);

    for (int i = 0; i < room; i++)
    {
        printf("%d ", zetsu[i] * (i + 1));
    }
    return 0;
}