#include <stdio.h>
#include "../../pkg/trapesium/trapesium.h"

void handlerTrapesium()
{
  float ab, bc, cd, ad, t;
  printf("\n ########## Hitung Trapesium ########## \n");

  printf("\n Masukkan ab : ");
  if (scanf("%f", &ab) != 1)
  {
    return;
  }
  printf("\n Masukkan bc : ");
  if (scanf("%f", &bc) != 1)
  {
    return;
  }
  printf("\n Masukkan cd : ");
  if (scanf("%f", &cd) != 1)
  {
    return;
  }
  printf("\n Masukkan ad : ");
  if (scanf("%f", &ad) != 1)
  {
    return;
  }
  printf("\n Masukkan tinggi : ");
  if (scanf("%f", &t) != 1)
  {
    return;
  }

  struct Trapesium data_trapesium = initTrapesium(ab, bc, cd, ad, t);

  printf("\n Option :");
  printf("\n 1. Luas Trapesium");
  printf("\n 2. Keliling Trapesium");
  printf("\n 3. Ubah Trapesium");
  printf("\n 0. keluar \n");

  int command;
  do
  {
    printf("\n input : ");
    scanf("%i", &command);

    switch (command)
    {
    case 1:
      printf("\n Luas trapesium : %.2f \n", getLuasTrapesium(data_trapesium));
      break;
    case 2:
      printf("\n Keliling trapesium : %.2f \n", getKelilingTrapesium(data_trapesium));
      break;
    case 3:
      printf("\n Mengubah trapesium");
      printf("\n Masukkan ab : ");
      if (scanf("%f", &ab) != 1)
      {
        return;
      }
      printf("\n Masukkan bc : ");
      if (scanf("%f", &bc) != 1)
      {
        return;
      }
      printf("\n Masukkan cd : ");
      if (scanf("%f", &cd) != 1)
      {
        return;
      }
      printf("\n Masukkan ad : ");
      if (scanf("%f", &ad) != 1)
      {
        return;
      }
      printf("\n Masukkan tinggi : ");
      if (scanf("%f", &t) != 1)
      {
        return;
      }
      ubahTrapesium(&data_trapesium, ab, bc, cd, ad, t);
      printf("\n success ubah trapesium \n");
      break;
    case 0:
      printf("\n out hitung trapesium \n");
      break;
    default:
      printf("\n option not found \n");
      break;
    }
  } while (command != 0);
}