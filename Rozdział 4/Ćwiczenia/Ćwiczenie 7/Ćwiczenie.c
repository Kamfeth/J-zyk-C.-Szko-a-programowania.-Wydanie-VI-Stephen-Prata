#include <float.h>
#include <stdio.h>

int main(void)
{
  const float firstNumber = 1.0 / 3.0;
  const double secondNumber = 1.0 / 3.0;
  printf("Cztery cyfry po przecinku: %.4f %.4lf\n", firstNumber, secondNumber);
  printf("Dwanaście cyfr po przecinku: %.12f %.12lf\n", firstNumber, secondNumber);
  printf("Szesnaście cyfr po przecinku: %.16f %.16lf\n", firstNumber, secondNumber);
  printf("Liczba cyfr znaczących dla liczb typu float: %d\n", FLT_DIG);
  printf("Liczba cyfr znaczących dla liczb typu double: %d", DBL_DIG);
  // Nie, wyświetlone wartości 1.0 / 3.0 nie są spójne z tymi wartościami.
}