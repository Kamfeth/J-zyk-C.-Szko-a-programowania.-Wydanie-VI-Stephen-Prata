#include <stdio.h>

void printMenu(void)
{
  printf("******************************************************************************\n");
  printf("Wybierz odpowiednią kategorię, dla której chcesz obliczyć swoją kwotę podatku:\n");
  printf("1) Stan Wolny                                2) Głowa rodziny\n");
  printf("3) Małżeństwo, rozliczenie wspólne           4) Małżeństwo, rozliczenie osobne\n");
  printf("5) Koniec programu\n");
  printf("******************************************************************************\n\n");
  printf("Wybierz kategorię: ");
}

double calculateTax(const char category, const double income)
{
  switch (category)
  {
    case '1': return income <= 17850.0 ? income * 0.15 : 2677.5 + (income - 17850.0) * 0.28;
    case '2': return income <= 23900.0 ? income * 0.15 : 3585.5 + (income - 23900.0) * 0.28;
    case '3': return income <= 29750.0 ? income * 0.15 : 4462.5 + (income - 29750.0) * 0.28;
    case '4': return income <= 14875.0 ? income * 0.15 : 2231.25 + (income - 14875.0) * 0.28;
  }
}

int main(void)
{
  printMenu();
  char category;
  while ((category = getchar()) != '5')
  {
    if (category != '1' && category != '2' && category != '3' && category != '4')
    {
      printf("Wybrano nieprawidłową kategorię, powracam do menu głównego\n\n");
      printMenu();
      getchar();
      continue;
    }
    double income;
    printf("Wprowadź swój dochód, który ma podlegać opodatkowaniu: ");
    scanf("%lf", &income);
    printf("Kwota podatku wynosi %.2lf $\n\n", calculateTax(category, income));
    printMenu();
    getchar();
  }
  printf("Koniec działania programu, życzę miłego dnia!");
}
