#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  char month[12];
  int dayOfMonth, year, numberOfMonth;
  printf("Wprowadź kolejno - dzień miesiąca, miesiąc oraz rok: ");
  scanf("%d%s%d", &dayOfMonth, month, &year);
  if (!(numberOfMonth = atoi(month)))
  {
    for (int i = 0; i < strlen(month); i++)
      month[i] = tolower(month[i]);
    numberOfMonth = -1;
    const char *nameOfMonths[] = {"styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec",
                                  "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien"};
    for (int i = 0; i < 12 && numberOfMonth == -1; i++)
    {
      if (strstr(nameOfMonths[i], month))
        numberOfMonth = i + 1;
    }
  }
  struct tm enteredDate = {.tm_mday = dayOfMonth, .tm_mon = numberOfMonth - 1, .tm_year = year};
  mktime(&enteredDate);
  printf("Liczba dni od 01.01.%d do %02d.%02d.%d to: %d", year, dayOfMonth, numberOfMonth, year, enteredDate.tm_yday + 1);
}