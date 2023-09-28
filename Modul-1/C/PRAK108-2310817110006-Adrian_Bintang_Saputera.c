#include <stdio.h>
#include <math.h>

int main()
{
    float putaran, jarakTempuh;
    printf("Masukkan Banyak Putaran: ");
    scanf("%f", &putaran);
    printf("Masukkan Jarak Tempuh: ");
    scanf("%f", &jarakTempuh);
    float kelilingTaman = jarakTempuh / putaran;
    float jarijariTaman = kelilingTaman / (2 * 3.14);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarakTempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijariTaman);

    return 0;
}