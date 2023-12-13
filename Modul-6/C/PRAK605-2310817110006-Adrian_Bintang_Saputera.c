#include <stdio.h>

int main()
{
  int n;

  printf("Input\n");
  scanf("%d", &n);

  printf("Matriks A\n");
  int A[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Matriks B\n");
  int B[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &B[i][j]);
    }
  }

  int hasil[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      hasil[i][j] = 0;
      for (int k = 0; k < n; k++)
      {
        hasil[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("\nOutput\n");
  printf("Matriks AXB\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", hasil[i][j]);
    }
    printf("\n");
  }

  return 0;
}