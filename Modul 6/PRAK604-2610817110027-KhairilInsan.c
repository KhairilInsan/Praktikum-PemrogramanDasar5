#include <stdio.h>
#include <string.h>

int main()
{
    char code[100], real[100];
    fgets(code, sizeof(code), stdin);
    code[strcspn(code, "\n")] = '\0';
    fgets(real, sizeof(real), stdin);
    real[strcspn(real, "\n")] = '\0';
    int star = 0, hash = 0;

    if (strlen(code) != strlen(real))
    {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    else
        for (size_t i = 0; i < strlen(code); i++)
        {
            if (code[i] == ' ' && real[i] == ' ')
            {
                printf(" ");
            }
            else if (code[i] == real[i] && code[i] != ' ')
            {
                printf("*");
                star++;
            }
            else if (code[i] != real[i])
            {
                printf("#");
                hash++;
            }
        }

    printf("\n* = %d", star);
    printf("\n# = %d", hash);

    if (star >= hash)
        printf("\nPesan Asli");
    else
        printf("\nPesan Palsu");

    return 0;
}