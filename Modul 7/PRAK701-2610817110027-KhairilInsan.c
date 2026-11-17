#include <stdio.h>
#include <string.h>

int main()
{
    char first[100], last[100];

    printf("Nama Depan : ");
    scanf("%s", first);
    printf("Nama Belakang : ");
    scanf("%s", last);

    int length = strlen(first) + strlen(last);

    printf("Nama Lengkap : %s %s\n", first, last);
    printf("Panjang Nama (tanpa spasi) : %d", length);

    return 0;
}
