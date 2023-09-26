#include <stdio.h>
#include <math.h>

int main()
{
    int alas, tinggi, sisiA, sisiB, sisiC, keliling, luas;
    printf("Masukkan Alas: ");
    scanf("%d", &alas);
    printf("Masukkan Tinggi: ");
    scanf("%d", &tinggi);

    sisiA = tinggi;
    sisiB = sqrt(pow(alas, 2) + pow(tinggi, 2));
    sisiC = alas;

    keliling = sisiA + sisiB + sisiC;
    luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);

    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", sisiA);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", sisiC);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}