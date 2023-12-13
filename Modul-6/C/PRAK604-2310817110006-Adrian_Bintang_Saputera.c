#include <stdio.h>
#include <string.h>

int main()
{
  char kode[101], pesan[101];

  printf("Input\n");
  fgets(kode, sizeof(kode), stdin);
  kode[strcspn(kode, "\n")] = '\0';

  fgets(pesan, sizeof(pesan), stdin);
  pesan[strcspn(pesan, "\n")] = '\0';

  int panjang_kode = strlen(kode);
  int panjang_pesan = strlen(pesan);

  if (panjang_kode != panjang_pesan)
  {
    printf("\nOutput\n");
    printf("Panjang kalimat berbeda, pesan palsu\n");
    return 0;
  }

  for (int i = 0; i < panjang_kode; i++)
  {
    if (kode[i] != ' ')
    {
      if (kode[i] == pesan[i])
      {
        pesan[i] = '*';
      }
      else
      {
        pesan[i] = '#';
      }
    }
    else
    {
      if (pesan[i] != ' ')
      {
        pesan[i] = '#';
      }
    }
  }

  int jumlahBintang = 0, jumlahPagar = 0;
  for (int i = 0; i < panjang_kode; i++)
  {
    if (pesan[i] == '*')
    {
      jumlahBintang++;
    }
    else if (pesan[i] == '#')
    {
      jumlahPagar++;
    }
  }

  printf("\nOutput\n");
  printf("%s\n", pesan);
  printf("* = %d\n", jumlahBintang);
  printf("# = %d\n", jumlahPagar);

  if (jumlahBintang >= jumlahPagar && panjang_kode == panjang_pesan)
  {
    printf("Pesan Asli\n");
  }
  else
  {
    printf("Pesan Palsu\n");
  }

  return 0;
}