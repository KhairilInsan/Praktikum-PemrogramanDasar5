#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    scanf("%s", word);
    int len = strlen(word), palindrome = 1;

    for (int i = 0; i < len; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] = word[i] + 32;
    }

    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - 1 - i])
            palindrome = 0;
    }

    if (palindrome)
        printf("Kata '%s' adalah palindrom", word);
    else
        printf("Kata '%s' bukan palindrom", word);

    return 0;
}
