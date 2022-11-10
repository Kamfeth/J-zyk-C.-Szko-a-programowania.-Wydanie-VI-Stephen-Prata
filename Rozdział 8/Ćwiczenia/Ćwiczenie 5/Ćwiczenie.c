#include <math.h>
#include <stdio.h>
void printOptionsToChoose(const int numberToGuess)
{
  printf("\n******************************************************************************\n");
  printf("Odpowiedź na pytanie: czy szukana liczba jest większa, mniejsza, czy równa %d?\n", numberToGuess);
  printf("1) Większa     2) Mniejsza     3) Równa\n");
  printf("******************************************************************************\n\n");
  printf("Wybierz odpowiedź: ");
}
int main(void)
{
  char option;
  int lowerLimit = 0, upperLimit = 100;
  printf("Wybierz liczbe od 1 do 100. Sprobuje ja odgadnac.\nWpisz t, jesli moja proba jest udana lub\nn, jesli nie trafilem.\n");
  printOptionsToChoose(50);
  while ((option = getchar()) != '3')
  {
    switch (option)
    {
      case '1':
        lowerLimit = round((lowerLimit + upperLimit) / 2.0);
        break;
      case '2':
        upperLimit = round((lowerLimit + upperLimit) / 2.0);
        break;
      default:
        printf("Wybrano nieprawidłową opcję, powracam do menu wyboru opcji\n\n");
    }
    printOptionsToChoose(round((lowerLimit + upperLimit) / 2.0));
    getchar();
  }
  printf("Wiedzialem, ze mi sie uda!\n");
  return 0;
}