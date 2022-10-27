#include <stdio.h>

int main(void)
{
  int number, numberOfEvenNumbers = 0, sumOfEvenNumbers = 0, numberOfOddNumbers = 0, sumOfOddNumbers = 0;
  printf("Wprowadź liczby całkowite. Wpisanie liczby 0 kończy działanie programu: ");
  while (scanf("%d", &number) && number != 0)
  {
    if (number % 2 == 0)
    {
      numberOfEvenNumbers++;
      sumOfEvenNumbers += number;
    }
    else
    {
      numberOfOddNumbers++;
      sumOfOddNumbers += number;
    }
  }
  printf("Do programu zostało wprowadzonych %d parzystych liczb\n", numberOfEvenNumbers);
  if (numberOfEvenNumbers > 0)
    printf("Średnia wartość tych liczb jest równa %lf\n", 1.0 * sumOfEvenNumbers / numberOfEvenNumbers);
  printf("Do programu zostało wprowadzonych %d nieparzystych liczb\n", numberOfOddNumbers);
  if (numberOfOddNumbers > 0)
    printf("Średnia wartość tych liczb jest równa %lf", 1.0 * sumOfOddNumbers / numberOfOddNumbers);
}
