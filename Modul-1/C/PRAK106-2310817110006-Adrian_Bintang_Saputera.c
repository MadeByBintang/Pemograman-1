#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Vaiabel a bernilai: ");
    scanf("%d", &a);
    printf("Vaiabel b bernilai: ");
    scanf("%d", &b);
    printf("Vaiabel c bernilai: ");
    scanf("%d", &c);

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a == b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b > c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a != c);

    return 0;
}