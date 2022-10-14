#include <stdio.h>

int main(void)
{
  int numberOfYearsOfInvestment = 0;
  double moneyOfEwa = 100.0, moneyOfKasia = 100.0;
  while (moneyOfEwa >= moneyOfKasia)
  {
    moneyOfEwa += 10.0;
    moneyOfKasia += moneyOfKasia * 0.05;
    numberOfYearsOfInvestment++;
  }
  printf("Wartość inwestycji Kasi przekroczy wartość inwestycji Ewy po %d latach\n", numberOfYearsOfInvestment);
  printf("Wartość inwestycji Ewy = %.2lf\nWartość inwestycji Kasi = %.2lf", moneyOfEwa, moneyOfKasia);
}