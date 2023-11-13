#include <stdio.h>

int main()
{
  int batas, i;

  printf("Input\n");
  scanf("%d", &batas);

  printf("Output\n");

  for (i = 1; i <= batas; i += 2)
  {
    printf("%d ", i);
  }

  printf("\n");

  if (batas % 2 == 0)
  {
    for (i = batas; i >= 2; i -= 2)
    {
      printf("%d ", i);
    }
  }
  else
  {
    for (i = batas - 1; i >= 2; i -= 2)
    {
      printf("%d ", i);
    }
  }

  return 0;
}