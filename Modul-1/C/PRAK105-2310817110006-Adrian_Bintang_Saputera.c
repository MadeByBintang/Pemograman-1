#include <stdio.h>

int main()
{
    int a, b, x, y;

    printf("Vaiabel a bernilai: ");
    scanf("%d", &a);
    printf("Vaiabel b bernilai: ");
    scanf("%d", &b);
    printf("Vaiabel x bernilai: ");
    scanf("%d", &x);
    printf("Vaiabel y bernilai: ");
    scanf("%d", &y);

    int sisaBagiA = a % b;
    int sisaBagiX = x % y;
    int totalSisaBagi = sisaBagiA + sisaBagiX;

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", totalSisaBagi);

    return 0;
}