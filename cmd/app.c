#include <stdio.h>
#include "lingkaran/handler.h"
#include "persegi/handler.h"
#include "trapesium/handler.h"
#include "segilima/handler.h"

void cmd_run()
{
  printf(" ########## LINGKARAN, PERSEGI, TRAPESIUM & SEGILIMA ########## \n \n");

  int command;

  do
  {
    printf("\n Option :");
    printf("\n 1. Lingkaran");
    printf("\n 2. Persegi");
    printf("\n 3. Trapesium");
    printf("\n 4. Segilima");
    printf("\n 0. keluar \n");

    printf("\n input : ");
    scanf("%i", &command);
    switch (command)
    {
    case 1:
      handlerLingkaran();
      break;
    case 2:
      handlerPersegi();
      break;
    case 3:
      handlerTrapesium();
      break;
    case 4:
      handlerSegilima();
      break;
    default:
      printf("out of program");
      break;
    }
  } while (command != 0);
}