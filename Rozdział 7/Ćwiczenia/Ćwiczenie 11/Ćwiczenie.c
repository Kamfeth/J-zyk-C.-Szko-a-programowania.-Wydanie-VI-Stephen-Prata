#include <ctype.h>
#include <stdio.h>

void printMenu(void)
{
  printf("******************************************************\n");
  printf("Wybierz odpowiednią opcję w celu dokonania zamówienia:\n");
  printf("A) Arbuz             B) Burak \n");
  printf("C) Cebula            K) Koniec przyjmowania zamówienia\n");
  printf("****************************************************\n\n");
  printf("Wybierz opcję: ");
}

int main(void)
{
  printMenu();
  char option;
  double weight, shippingCost, watermelonsInKilograms = 0.0, beetrootsInKilograms = 0.0, onionsInKilograms = 0.0, discount = 0.0;
  while ((option = toupper(getchar())) != 'K')
  {
    if (option != 'A' && option != 'B' && option != 'C')
    {
      printf("Wybrano nieprawidłową opcję, powracam do menu głównego\n\n");
      printMenu();
      getchar();
      continue;
    }
    printf("Wprowadź liczbę kilogramów wybranego produktu: ");
    scanf("%lf", &weight);
    switch (option)
    {
      case 'A':
        watermelonsInKilograms += weight;
        break;
      case 'B':
        beetrootsInKilograms += weight;
        break;
      case 'C':
        onionsInKilograms += weight;
    }
    printMenu();
    getchar();
  }
  printf("Podsumowanie zamówienia:\n");
  printf("***********************************************************\n");
  printf("Cena za kilogram arbuza: 1.25 zł\nCena za kilogram buraka: 0.65 zł\nCena za kilogram cebuli: 0.89 zł\n\n");
  printf("Liczba zamówionych arbuzów: %.2lf kg\n", watermelonsInKilograms);
  printf("Liczba zamówionych buraków: %.2lf kg\n", beetrootsInKilograms);
  printf("Liczba zamówionych cebul: %.2lf kg\n\n", onionsInKilograms);
  printf("Cena za zamówione arbuzy: %.2lf zł\n", watermelonsInKilograms * 1.25);
  printf("Cena za zamówione buraki: %.2lf zł\n", beetrootsInKilograms * 0.65);
  printf("Cena za zamówione cebule: %.2lf zł\n\n", onionsInKilograms * 0.89);
  const double sumOfAllOrderedProducts = watermelonsInKilograms * 1.25 + beetrootsInKilograms * 0.65 + onionsInKilograms * 0.89;
  printf("Sumaryczna cena za wszystkie zamówione produkty: %.2lf zł\n", sumOfAllOrderedProducts);
  if (sumOfAllOrderedProducts > 100.0)
  {
    discount = sumOfAllOrderedProducts * 0.05;
    printf("Wartość zamówienia przekroczyła 100 zł: otrzymujesz rabat w wysokości: %.2lf zł\n", discount);
  }
  const double sumOfWeightsOfAllProducts = watermelonsInKilograms + beetrootsInKilograms + onionsInKilograms;
  if (sumOfWeightsOfAllProducts <= 5.0)
    shippingCost = 3.5;
  else if (sumOfWeightsOfAllProducts > 5.0 && sumOfWeightsOfAllProducts <= 20.0)
    shippingCost = 10.0;
  else
    shippingCost = (sumOfWeightsOfAllProducts - 20.0) * 8.1;
  printf("Koszt przesyłki wynosi: %.2lf zł\n", shippingCost);
  printf("Całkowity koszt zamówienia wynosi: %.2lf zł\n", sumOfAllOrderedProducts - discount + shippingCost);
  printf("***********************************************************");
}
