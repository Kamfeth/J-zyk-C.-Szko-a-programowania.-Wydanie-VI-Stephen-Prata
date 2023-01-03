#include <stdio.h>

int getTotalNumberOfFunctionCalls(void)
{
  static int numberOfFunctionCalls;
  return ++numberOfFunctionCalls;
}

int main(void)
{
  for (int i = 0; i < 100; i++)
    printf("W iteracji #%d sumaryczna liczba wywołań funkcji wynosi %d.\n", i + 1, getTotalNumberOfFunctionCalls());
}