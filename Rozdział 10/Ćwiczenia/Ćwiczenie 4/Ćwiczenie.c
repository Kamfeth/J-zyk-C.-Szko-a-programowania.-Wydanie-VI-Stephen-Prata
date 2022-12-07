#include <stdio.h>

int getIndexOfBiggestNumberFromArray(const int numbers[], const int sizeOfArray)
{
  int biggestNumberFromArray = numbers[0], indexOfBiggestNumberFromArray = 0;
  for (int i = 1; i < sizeOfArray; i++)
  {
    if (numbers[i] > biggestNumberFromArray)
    {
      biggestNumberFromArray = numbers[i];
      indexOfBiggestNumberFromArray = i;
    }
  }
  return indexOfBiggestNumberFromArray;
}

int main(void)
{
  const int numbers[] = {0, 13, 1, 8, -28, 2, 5, 3};
  printf("Indeks największej wartości w tablicy liczb całkowitych jest: %d", getIndexOfBiggestNumberFromArray(numbers, 7));
}