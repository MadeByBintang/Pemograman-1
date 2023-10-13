#include <stdio.h>

int main()
{
    float a, b, i, j, x, y, hasil;

    printf("Input\n");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = (a - b) * (i / j) - (x + y);

    printf("\nOutput\n");
    printf("Hasil dari (a - b) * (i / j) - (x + y) adalah %.3f\n", hasil);

    return 0;
}
