#include <stdio.h>

int main()
{
  int angka;

  printf("Masukkan sebuah angka (0-100): ");
  scanf("%d", &angka);

  if (angka == 0)
  {
    printf("Nol\n");
  }
  else if (angka >= 1 && angka <= 9)
  {
    printf("Satuan\n");
  }
  else if (angka >= 10 && angka <= 19)
  {
    printf("Belasan\n");
  }
  else if (angka >= 20 && angka <= 99)
  {
    printf("Puluhan\n");
  }
  else if (angka == 100)
  {
    printf("Anda Menginput Melebihi Limit Bilangan\n");
  }

  return 0;
}