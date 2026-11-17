#include <stdio.h>

int main()
{
    char sentence[200];
    int vowel = 0, consonant = 0;

    printf("Kalimat : ");
    scanf("%[^\n]", sentence);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        char letter = sentence[i];

        if (letter >= 'A' && letter <= 'Z')
            letter = letter + 32;

        if (letter == 'a' || letter == 'i' || letter == 'u' || letter == 'e' || letter == 'o')
            vowel++;
        else if (letter >= 'a' && letter <= 'z')
            consonant++;
    }

    printf("Jumlah Vokal : %d\n", vowel);
    printf("Jumlah Konsonan : %d", consonant);

    return 0;
}