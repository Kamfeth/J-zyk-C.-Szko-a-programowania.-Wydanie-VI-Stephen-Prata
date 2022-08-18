#include <stdio.h>
#include <string.h>

int main(void)
{
  char firstName[6], lastName[11];
  printf("Podaj swoje imię oraz nazwisko: ");
  scanf("%s%s", firstName, lastName);
  printf("%s %s\n", firstName, lastName);
  printf("%*d %*d\n", (int)strlen(firstName), (int)strlen(firstName), (int)strlen(lastName), (int)strlen(lastName));
  printf("%s %s\n", firstName, lastName);
  printf("%-*d %-*d\n", (int)strlen(firstName), (int)strlen(firstName), (int)strlen(lastName), (int)strlen(lastName));
}