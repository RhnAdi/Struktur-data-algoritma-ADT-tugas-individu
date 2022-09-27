#include <stdio.h>
#include "../../pkg/segilima/segilima.h"

void handlerSegilima()
{
  float s;
  printf("\n ########## Hitung Segilima ########## \n");

  printf("\n Masukkan sisi : ");
  if (scanf("%f", &s) != 1)
  {
    return;
  }

  struct Segilima data_segilima = initSegilima(s);

  printf("\n Option :");
  printf("\n 1. Luas Segilima");
  printf("\n 2. Keliling Segilima");
  printf("\n 3. Ubah Segilima");
  printf("\n 0. keluar \n");

  int command;
  do
  {
    printf("\n input : ");
    scanf("%i", &command);

    switch (command)
    {
    case 1:
      printf("\n Luas Segilima : %.2f \n", getLuasSegilima(data_segilima));
      break;
    case 2:
      printf("\n Keliling Segilima : %.2f \n", getKelilingSegilima(data_segilima));
      break;
    case 3:
      printf("\n Mengubah Segilima");
      printf("\n Masukkan sisi : ");
      if (scanf("%f", &s) != 1)
      {
        return;
      }

      ubahSegilima(&data_segilima, s);
      printf("\n success ubah Segilima \n");
      break;
    case 0:
      printf("\n out hitung segilima \n");
      break;
    default:
      printf("\n option not found \n");
      break;
    }
  } while (command != 0);
}
