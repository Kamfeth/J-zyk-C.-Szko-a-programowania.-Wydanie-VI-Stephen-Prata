#include <stdio.h>

double min(const double x, const double y)
{
  return x < y ? x : y;
}

int main(void)
{
  printf("Wartość mniejsza z spośród liczb 13.37 oraz 13.38 wynosi: %.2lf", min(13.37, 13.38));
}