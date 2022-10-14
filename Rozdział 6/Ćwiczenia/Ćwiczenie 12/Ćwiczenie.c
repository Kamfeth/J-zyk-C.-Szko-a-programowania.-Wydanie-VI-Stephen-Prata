#include <stdio.h>

int main(void)
{
  int maximumValueOfSequences;
  printf("Wprowadź maksymalną wartość do policzenia dwóch szeregów (ujemna liczba lub zero kończy działanie programu): ");
  while (scanf("%d", &maximumValueOfSequences) && maximumValueOfSequences > 0)
  {
    double valueOfFirstSequence = 0, valueOfSecondSequence = 0;
    for (int i = 1; i <= maximumValueOfSequences; i++)
    {
      valueOfFirstSequence += 1.0 / i;
      valueOfSecondSequence += i % 2 == 0 ? -1.0 / i : 1.0 / i;
    }
    printf("Wartość pierwszego ciągu jest równa %lf\n", valueOfFirstSequence);
    printf("Wartość drugiego ciągu jest równa %lf\n", valueOfSecondSequence);
    printf("Wprowadź maksymalną wartość do policzenia dwóch szeregów (ujemna liczba lub zero kończy działanie programu): ");
  }
  printf("Zakończono działanie programu, życzę miłego dnia!");
}
// Tak, drugi ciąg dąży do wartości 0.693147, zarówno dla 1000000000 jak i dla 2100000000 wyrazów