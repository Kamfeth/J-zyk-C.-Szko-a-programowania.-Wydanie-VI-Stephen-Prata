#include <stdio.h>

int main(void)
{
  double moneyOfJim = 1000000.0;
  int numberOfYearsOfInvestment = 0;
  while (moneyOfJim > 0.0)
  {
    moneyOfJim += moneyOfJim * 0.08 - 100000.0;
    numberOfYearsOfInvestment++;
  }
  printf("Jim wypłacił wszystkie swoje pieniądze z konta po %d latach.", numberOfYearsOfInvestment);
}