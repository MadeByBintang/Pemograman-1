#include <stdio.h>

int main()
{

    float a, b, x, y;

    printf("Vaiabel a bernilai: ");
    scanf("%f", &a);

    printf("Vaiabel b bernilai: ");
    scanf("%f", &b);

    printf("Vaiabel x bernilai: ");
    scanf("%f", &x);

    printf("Vaiabel y bernilai: ");
    scanf("%f", &y);

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", (a + b) * x / y);
    return 0;
}