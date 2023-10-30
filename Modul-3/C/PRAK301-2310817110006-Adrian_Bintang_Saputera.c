#include <stdio.h>

int main()
{
  int angka1, angka2;
  printf("Masukkan 2 angka acak: ");
  scanf("%d %d", &angka1, &angka2);

  if (angka1 <= angka2)
  {
    printf("Urutan terkecil ke terbesar: %d %d\n", angka1, angka2);
  }
  else
  {
    printf("Urutan terkecil ke terbesar: %d %d\n", angka2, angka1);
  }

  return 0;
}