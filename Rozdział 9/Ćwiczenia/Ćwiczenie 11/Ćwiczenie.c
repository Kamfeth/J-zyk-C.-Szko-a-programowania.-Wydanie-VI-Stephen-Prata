#include <stdio.h>

unsigned long long Fibonacci(const int numberOfSequenceToCalculate)
{
  unsigned long long fibNumber = numberOfSequenceToCalculate == 1 ? 1LL : 0LL, penultimateFibNumber = 0LL, lastFibNumber = 1LL;
  for (int i = 2; i <= numberOfSequenceToCalculate; i++)
  {
    fibNumber = penultimateFibNumber + lastFibNumber;
    penultimateFibNumber = lastFibNumber;
    lastFibNumber = fibNumber;
  }
  return fibNumber;
}

int main(void)
{
  printf("Dwudziesty pierwszy wyraz ciągu Fibonacciego wynosi: %llu", Fibonacci(21));
}