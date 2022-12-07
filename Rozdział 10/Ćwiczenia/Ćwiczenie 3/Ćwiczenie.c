#include <stdio.h>

int getBiggestNumberFromArray(const int numbers[], const int sizeOfArray)
{
  int biggestNumberFromArray = numbers[0];
  for (int i = 1; i < sizeOfArray; i++)
  {
    if (numbers[i] > biggestNumberFromArray)
      biggestNumberFromArray = numbers[i];
  }
  return biggestNumberFromArray;
}

int main(void)
{
  const int numbers[] = {0, 13, 1, 8, -28, 2, 5, 3};
  printf("Największą wartością w tablicy liczb całkowitych jest: %d", getBiggestNumberFromArray(numbers, 7));
}