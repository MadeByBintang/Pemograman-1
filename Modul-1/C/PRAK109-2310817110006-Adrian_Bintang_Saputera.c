#include <stdio.h>

int main()
{
    int jumlahPasukanYuZhong;
    printf("Jumlah Pasukan yang dibawa YuZhong: ");
    scanf("%d", &jumlahPasukanYuZhong);
    int jumlahPahlawan;
    printf("Jumlah Pahlawan: ");
    scanf("%d", &jumlahPahlawan);
    int jumlahPasukanYangHarusDikalahkanSetiapPahlawan;

    jumlahPasukanYangHarusDikalahkanSetiapPahlawan = jumlahPasukanYuZhong / jumlahPahlawan;

    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", jumlahPasukanYangHarusDikalahkanSetiapPahlawan);

    return 0;
}