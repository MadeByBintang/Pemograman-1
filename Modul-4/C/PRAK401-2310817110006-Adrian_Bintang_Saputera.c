#include <stdio.h>

int main()
{
  int angkaKelipatan;
  char simbol;

  printf("Input\n");
  scanf("%d %c", &angkaKelipatan, &simbol);

  printf("Output\n");
  for (int i = 1; i <= 50; i++)
  {
    if (i % angkaKelipatan == 0)
    {
      printf("%c ", simbol);
    }
    else
    {
      printf("%d ", i);
    }
  }

  return 0;
}