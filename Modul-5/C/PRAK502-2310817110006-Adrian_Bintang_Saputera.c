#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2)
{
  // Lengkapi Function ini
  int selisih;
  if (nilai1 > nilai2)
  {
    selisih = nilai1 - nilai2;
  }
  else
  {
    selisih = nilai2 - nilai1;
  }
  return selisih;
}

int mutlak(int angka)
{
  // Lengkapi Function ini
  return (int)fabs((double)angka);
}

int main()
{
  int a, b, c, d;
  int Hasil;

  scanf("%d", &a);
  scanf("%d", &c);
  scanf("%d", &b);
  scanf("%d", &d);

  Hasil = hitung(a, b) + hitung(c, d);
  printf("%d", mutlak(Hasil));

  return 0;
}