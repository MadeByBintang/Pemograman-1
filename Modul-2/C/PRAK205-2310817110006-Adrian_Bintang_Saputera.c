#include <stdio.h>
#include <math.h>

int main()
{
    float A, B;

    printf("Input\n");
    scanf("%f %f", &A, &B);

    float C = sqrt(B * B - A * A);
    float tinggi = A;
    float alas = C;
    float keliling = A + B + C;
    float luas = 0.5 * (C * A);

    printf("Output\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}
