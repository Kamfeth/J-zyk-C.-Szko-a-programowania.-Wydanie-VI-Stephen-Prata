#include <stdio.h>

int main(void)
{
  int lowerLimit, upperLimit;
  printf("Podaj dolna i gorna granice przedzialu liczb calkowitych: ");
  while (scanf("%d%d", &lowerLimit, &upperLimit) == 2 && lowerLimit < upperLimit)
  {
    int sumOfSquaresOfNumbers = 0;
    for (int i = lowerLimit; i <= upperLimit; i++)
      sumOfSquaresOfNumbers += i * i;
    printf("Suma kwadratow od %d do %d wynosi %d\n", lowerLimit * lowerLimit, upperLimit * upperLimit, sumOfSquaresOfNumbers);
    printf("Podaj nastepny przedzial: ");
  }
  printf("Koniec");
}