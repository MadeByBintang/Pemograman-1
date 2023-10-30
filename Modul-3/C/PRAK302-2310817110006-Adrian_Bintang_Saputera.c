#include <stdio.h>

int main()
{
  int nilai;
  char grade;

  printf("Masukkan nilai: ");
  scanf("%i", &nilai);

  if (nilai >= 80)
  {
    grade = 'A';
  }
  else if (nilai >= 70 && nilai <= 79)
  {
    grade = 'B';
  }
  else if (nilai >= 60 && nilai <= 69)
  {
    grade = 'C';
  }
  else if (nilai >= 50 && nilai <= 59)
  {
    grade = 'D';
  }
  else if (nilai < 50)
  {
    grade = 'E';
  }

  printf("Grade anda: %c\n", grade);

  return 0;
}