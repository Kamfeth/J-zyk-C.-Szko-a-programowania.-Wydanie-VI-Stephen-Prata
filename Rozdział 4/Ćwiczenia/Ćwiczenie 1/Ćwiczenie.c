#include <stdio.h>

int main(void)
{
  char firstName[6], lastName[11];
  printf("Podaj swoje imię: ");
  scanf("%s", firstName);
  printf("Podaj swoje nazwisko: ");
  scanf("%s", lastName);
  printf("Nazywasz się: %s, %s", lastName, firstName);
}