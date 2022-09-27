#include <stdio.h>
#include "../../pkg/persegi/persegi.h"

void handlerPersegi()
{
  float s;
  printf("\n ########## Hitung Persegi ########## \n");

  printf("\n Masukkan sisi : ");
  if (scanf("%f", &s) != 1)
  {
    return;
  }
  struct Persegi data_persegi = initPersegi(s);

  printf("\n Option :");
  printf("\n 1. Luas Persegi");
  printf("\n 2. Keliling Persegi");
  printf("\n 3. Ubah Persegi");
  printf("\n 0. keluar \n");

  int command;
  do
  {
    printf("\n input : ");
    scanf("%i", &command);

    switch (command)
    {
    case 1:
      printf("\n Luas persegi : %.2f \n", getLuasPersegi(data_persegi));
      break;
    case 2:
      printf("\n Keliling persegi : %.2f \n", getKelilingPersegi(data_persegi));
      break;
    case 3:
      printf("\n Mengubah persegi");
      printf("\n Masukkan sisi : ");
      float s;
      if (scanf("%f", &s) != 1)
      {
        return;
      }
      ubahPersegi(&data_persegi, s);
      printf("\n success ubah persegi \n");
      break;
    case 0:
      printf("\n out hitung persegi \n");
      break;
    default:
      printf("\n option not found \n");
      break;
    }
  } while (command != 0);
}