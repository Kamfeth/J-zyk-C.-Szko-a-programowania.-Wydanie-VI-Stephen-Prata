#include <stdio.h>

void reverseNumbersInArray(double numbers[], const int sizeOfArray)
{
  for (int i = 0; i < sizeOfArray / 2; i++)
  {
    const double temporaryNumber = numbers[i];
    numbers[i] = numbers[sizeOfArray - i - 1];
    numbers[sizeOfArray - i - 1] = temporaryNumber;
  }
}

int main(void)
{
  double numbers[] = {13.37, 19.94, 3.14, 7.53, 0.02};
  printf("Przed wywołaniem funkcji: %.2lf %.2lf %.2lf %.2lf %.2lf\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
  reverseNumbersInArray(numbers, 5);
  printf("Po wywołaniu funkcji: %.2lf %.2lf %.2lf %.2lf %.2lf", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
}