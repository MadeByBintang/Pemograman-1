#include <stdio.h>

int main()
{
  int detik, jam, menit, sisaDetik;

  printf("Masukkan jumlah detik: ");
  scanf("%d", &detik);

  jam = detik / 3600;
  sisaDetik = detik % 3600;
  menit = sisaDetik / 60;
  sisaDetik = sisaDetik % 60;

  if (jam >= 24)
  {
    int hari = jam / 24;
    jam = jam % 24;
    printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, sisaDetik);
  }
  else
  {
    printf("%02d:%02d:%02d\n", jam, menit, sisaDetik);
  }

  return 0;
}