#include <stdio.h>

int main(int argc, char *argv[])
{
  int quantityOfNumbers = 0;
  double number, sumOfNumbers = 0.0;
  if (argc > 1)
  {
    FILE *file = fopen(argv[1], "r");
    while (fscanf(file, "%lf", &number) != EOF)
    {
      sumOfNumbers += number;
      quantityOfNumbers++;
    }
    fclose(file);
    printf("Wczytano wszystkie liczby zmiennoprzecinkowe znajdujące się w pliku o nazwie %s\n", argv[1]);
  }
  else
  {
    printf("Wprowadź liczbę zmiennoprzecinkową (wprowadzenie wartości nieliczbowej kończy wczytywanie danych): ");
    while (scanf("%lf", &number))
    {
      sumOfNumbers += number;
      quantityOfNumbers++;
      printf("Wprowadź liczbę zmiennoprzecinkową (wprowadzenie wartości nieliczbowej kończy wczytywanie danych): ");
    }
  }
  printf("Średnia arytmetyczna wczytanych liczb zmiennoprzecinkowych wynosi: %.2lf\n", sumOfNumbers / quantityOfNumbers);
}