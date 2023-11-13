#include <stdio.h>

int main()
{
  int n, m;
  int total = 0;

  printf("Input\n");
  scanf("%d %d", &n, &m);

  printf("Output\n");
  for (int i = 1; i <= n; i++)
  {
    int hasil = 0;
    for (int j = i; j >= 1; j--)
    {
      printf("(%d * %d)", j, m);
      if (j > 1)
      {
        printf(" + ");
      }
      hasil += j * m;
    }
    total += hasil;
    printf(" = %d\n", hasil);
  }

  printf("%d\n", total);

  return 0;
}