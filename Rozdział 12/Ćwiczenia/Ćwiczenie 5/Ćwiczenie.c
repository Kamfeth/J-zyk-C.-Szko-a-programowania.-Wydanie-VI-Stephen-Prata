#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compareTwoNumbers(const void *firstNumber, const void *secondNumber)
{
  return *(int*)firstNumber > *(int*)secondNumber ? -1 : *(int*)firstNumber == *(int*)secondNumber ? 0 : 1;
}

int main(void)
{
  int randomNumbers[100];
  srand(time(NULL));
  for (int i = 0; i < 100; i++)
    randomNumbers[i] = rand() % 10 + 1;
  qsort(randomNumbers, sizeof(randomNumbers) / sizeof(int), sizeof(int), compareTwoNumbers);
  for (int i = 0; i < 100; i++)
    printf("Losowa liczba #%d jest równa %d\n", i + 1, randomNumbers[i]);
}