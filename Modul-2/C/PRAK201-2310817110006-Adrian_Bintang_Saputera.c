#include <stdio.h>
#include <string.h>

int main()
{
    char nama[50], nim[50], kelas_paralel[50], tempat_lahir[50], alamat[50], hobi[50], no_hp[50];

    printf("Input\n");
    printf("Nama                        : ");
    gets(nama);
    printf("NIM                         : ");
    gets(nim);
    printf("Kelas Paralel               : ");
    gets(kelas_paralel);
    printf("Tempat/Tanggal Lahir        : ");
    gets(tempat_lahir);
    printf("Alamat                      : ");
    gets(alamat);
    printf("Hobby                       : ");
    gets(hobi);
    printf("No. HP                      : ");
    gets(no_hp);

    printf("\nOutput\n");
    printf("Nama                        : %s\n", nama);
    printf("NIM                         : %s\n", nim);
    printf("Kelas Paralel               : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir        : %s\n", tempat_lahir);
    printf("Alamat                      : %s\n", alamat);
    printf("Hobby                       : %s\n", hobi);
    printf("No. HP                      : %s\n", no_hp);

    return 0;
}
