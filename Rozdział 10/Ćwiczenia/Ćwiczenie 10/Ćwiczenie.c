#include <stdio.h>

void addValuesFromArraysIntoThirdArray(const int firstArray[], const int secondArray[], int thirdArray[], const int sizeOfArrays)
{
  for (int i = 0; i < sizeOfArrays; i++)
    thirdArray[i] = firstArray[i] + secondArray[i];
}

int main(void)
{
  const int firstArray[] = {2, 4, 5, 8}, secondArray[] = {1, 0, 4, 6};
  int thirdArray[4];
  printf("Liczby z pierwszej tablicy: %d %d %d %d\n", firstArray[0], firstArray[1], firstArray[2], firstArray[3]);
  printf("Liczby z drugiej tablicy: %d %d %d %d\n", secondArray[0], secondArray[1], secondArray[2], secondArray[3]);
  addValuesFromArraysIntoThirdArray(firstArray, secondArray, thirdArray, 4);
  printf("Liczby tablicy trzeciej po wywołaniu funkcji: %d %d %d %d", thirdArray[0], thirdArray[1], thirdArray[2] ,thirdArray[3]);
}