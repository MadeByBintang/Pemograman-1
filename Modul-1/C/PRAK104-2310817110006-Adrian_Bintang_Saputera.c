#include <stdio.h>

int main()
{
    int hargaSepatuA;
    printf("Harga Sepatu A adalah ");
    scanf("%d", &hargaSepatuA);
    int hargaSepatuB;
    printf("Harga Sepatu B adalah ");
    scanf("%d", &hargaSepatuB);
    float diskonSepatuA = 0.13;
    float diskonSepatuB = 0.21;
    int hargaSepatuADiskon = hargaSepatuA * (1 - diskonSepatuA);
    int hargaSepatuBDiskon = hargaSepatuB * (1 - diskonSepatuB);

    printf("Harga sepatu A setelah mendapat diskon menjadi: %d\n", hargaSepatuADiskon);
    printf("Harga sepatu B setelah mendapat diskon menjadi: %d\n", hargaSepatuBDiskon);

    return 0;
}