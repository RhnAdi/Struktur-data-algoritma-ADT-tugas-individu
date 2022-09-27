#include <stdio.h>
#include "../../pkg/lingkaran/lingkaran.h"

void handlerLingkaran()
{
  float r;
  printf("\n ########## Hitung Lingkaran ########## \n");

  printf("\n Masukkan Jari-jari : ");
  if (scanf("%f", &r) != 1)
  {
    return;
  }
  struct Lingkaran data_lingkaran = initLingkaran(r);

  printf("\n Option :");
  printf("\n 1. Luas Lingkaran");
  printf("\n 2. Keliling Lingkaran");
  printf("\n 3. Ubah Lingkaran");
  printf("\n 0. keluar \n");

  int command;
  do
  {
    printf("\n input : ");
    scanf("%i", &command);

    switch (command)
    {
    case 1:
      printf("\n Luas lingkaran : %.2f \n", getLuasLingkaran(data_lingkaran));
      break;
    case 2:
      printf("\n Keliling lingkaran : %.2f \n", getKelilingLingkaran(data_lingkaran));
      break;
    case 3:
      printf("\n Mengubah lingkaran");
      printf("\n Masukkan Jari-jari : ");
      float r;
      if (scanf("%f", &r) != 1)
      {
        return;
      }
      ubahLingkaran(&data_lingkaran, r);
      printf("\n success ubah Lingkaran \n");
      break;
    case 0:
      printf("\n out hitung lingkaran \n");
      break;
    default:
      printf("\n option not found \n");
      break;
    }
  } while (command != 0);
}