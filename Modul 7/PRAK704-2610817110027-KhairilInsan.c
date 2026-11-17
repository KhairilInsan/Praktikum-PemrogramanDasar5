#include <stdio.h>
#include <string.h>

int main()
{
    char description[200];
    scanf("%[^\n]", description);

    if (strlen(description) > 20)
    {
        description[20] = '\0';
        printf("%s...", description);
    }
    else
        printf("%s", description);

    return 0;
}
