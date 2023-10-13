#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main()
{
    double jariJari, tinggi;

    printf("Input\n");
    scanf("%lf %lf", &jariJari, &tinggi);

    double volume = PI * pow(jariJari, 2) * tinggi;
    double luasPermukaan = 2 * PI * jariJari * (jariJari + tinggi);
    double keliling = 2 * PI * jariJari;

    printf("\nOutput\n");
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luasPermukaan);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}
