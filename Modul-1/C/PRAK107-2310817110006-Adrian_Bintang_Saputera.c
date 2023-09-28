#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Panjang sisi segitiga a: ");
    scanf("%f", &a);
    printf("Panjang sisi segitiga b: ");
    scanf("%f", &b);
    printf("Panjang sisi segitiga c: ");
    scanf("%f", &c);

    float kelilingTanah = a + b + c;
    int hargaTanahPerMeter = 85000;
    int biayaYangDiperlukan = kelilingTanah * hargaTanahPerMeter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %.0f, %.0f, dan %.0f\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %.0f\n", kelilingTanah);
    printf("Harga tanah Per Meter adalah %d\n", hargaTanahPerMeter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biayaYangDiperlukan);

    return 0;
}