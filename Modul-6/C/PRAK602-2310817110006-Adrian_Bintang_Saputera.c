#include <stdio.h>

int main()
{
  int jumlahRuangan;

  printf("Input\n");
  scanf("%d", &jumlahRuangan);

  int zetsuPutih[jumlahRuangan];

  for (int i = 0; i < jumlahRuangan; i++)
  {
    scanf("%d", &zetsuPutih[i]);
  }

  printf("\nOutput\n");
  for (int i = 0; i < jumlahRuangan; i++)
  {
    printf("%d ", zetsuPutih[i] * (i + 1));
  }

  return 0;
}