#include <math.h>
#include <stdio.h>

int main(void)
{
  int powersOfTwo[8];
  for (int i = 0; i < 8; i++)
    powersOfTwo[i] = pow(2, i);
  int indexOfNumber = 0;
  do
  {
    printf("2^%d = %d\n", indexOfNumber, powersOfTwo[indexOfNumber]);
    indexOfNumber++;
  } 
  while (indexOfNumber < 8);
}