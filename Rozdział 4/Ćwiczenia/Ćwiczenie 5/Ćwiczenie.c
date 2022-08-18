#include <stdio.h>

int main(void)
{
  double downloadSpeed, sizeOfFile;
  printf("Podaj prędkość pobierania w megabitach na sekundę: ");
  scanf("%lf", &downloadSpeed);
  printf("Podaj rozmiar pliku do pobrania w megabajtach: ");
  scanf("%lf", &sizeOfFile);
  printf("Przy %.2lf megabitow na sekunde plik o rozmiarze %.2lf megabajta\n", downloadSpeed, sizeOfFile);
  printf("zostanie pobrany w %.2lf sekundy", sizeOfFile * 8 / downloadSpeed);
}