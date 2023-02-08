#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "Miesiac.h"

int policzLiczbeDniOdPierwszegoStycznia(char *nazwaMiesiaca)
{
  for (int i = 0; i < strlen(nazwaMiesiaca); i++)
    nazwaMiesiaca[i] = tolower(nazwaMiesiaca[i]);
  extern const struct Miesiac miesiace[12];
  int liczbeDniOdPierwszegoStyczniaDoOstatniegoDniaMiesiaca = 0, numerMiesiaca = 0;
  for (int i = 0; i < 12 && numerMiesiaca == 0; i++)
  {
    if (!strcmp(miesiace[i].nazwa, nazwaMiesiaca))
      numerMiesiaca = i + 1;
  }
  for (int i = 0; numerMiesiaca >= 1 && numerMiesiaca <= 12 && i < numerMiesiaca; i++)
    liczbeDniOdPierwszegoStyczniaDoOstatniegoDniaMiesiaca += miesiace[i].liczbaDni;
  return liczbeDniOdPierwszegoStyczniaDoOstatniegoDniaMiesiaca;
}

int main(void)
{
  char nazwaMiesiaca[12];
  printf("Wprowadź nazwę miesiąca: ");
  scanf("%s", nazwaMiesiaca);
  printf("Liczba dni od 01.01 do ostatniego dnia podanego miesiąca to: %d\n", policzLiczbeDniOdPierwszegoStycznia(nazwaMiesiaca));
}