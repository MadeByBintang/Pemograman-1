#include <stdio.h>

int main()
{
  int n1, n2;

  printf("Input\n");
  scanf("%d %d", &n1, &n2);

  if (n1 != n2)
  {
    printf("\nOutput\n");
    printf("Jumlah tidak sama\n");
    return 0;
  }

  int matriks1[n1];
  for (int i = 0; i < n1; i++)
  {
    scanf("%d", &matriks1[i]);
  }

  int matriks2[n2];
  for (int i = 0; i < n2; i++)
  {
    scanf("%d", &matriks2[i]);
  }

  printf("\nOutput\n");
  for (int i = 0; i < n1; i++)
  {
    printf("%d ", matriks1[i] * matriks2[i]);
  }
  printf("\n");

  return 0;
}