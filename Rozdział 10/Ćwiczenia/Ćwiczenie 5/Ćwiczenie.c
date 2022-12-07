#include <stdio.h>

int getDifferenceOfBiggestAndSmallestNumber(const int numbers[], const int sizeOfArray)
{
  int biggestNumberFromArray = numbers[0], smallestNumberFromArray = numbers[0];
  for (int i = 1; i < sizeOfArray; i++)
  {
    if (numbers[i] > biggestNumberFromArray)
      biggestNumberFromArray = numbers[i];
    else if (numbers[i] < smallestNumberFromArray)
      smallestNumberFromArray = numbers[i];
  }
  return biggestNumberFromArray - smallestNumberFromArray;
}

int main(void)
{
  const int numbers[] = {0, 13, 1, 8, -28, 2, 5, 3};
  printf("Różnica między największą, a najmniejszą wartością wynosi: %d", getDifferenceOfBiggestAndSmallestNumber(numbers, 7));
}