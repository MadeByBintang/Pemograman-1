#include <stdio.h>

int main()
{
  int N;

  printf("Masukkan sebuah bilangan bulat N: ");
  scanf("%d", &N);

  if (N > 0)
  {
    printf("Positif\n");
  }
  else if (N < 0)
  {
    printf("Negatif\n");
  }
  else
  {
    printf("Nol\n");
  }

  return 0;
}