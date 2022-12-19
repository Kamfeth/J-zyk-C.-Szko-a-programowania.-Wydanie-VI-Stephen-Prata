#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int atoiUpgraded(const char *string)
{
  char number[12] = "0";
  int numberOfDigits = 0;
  for (int i = 0; i < strlen(string); i++)
  {
    if (isdigit(string[i]) || string[i] == '-')
      number[numberOfDigits++] = string[i];
    else if (numberOfDigits > 0)
      break;
  }
  return strtol(number, NULL, 10);
}

int main(void)
{
  char string[12];
  printf("Wprowadź łańcuch tekstowy (maksymalnie do 11 znaków): ");
  fgets(string, 12, stdin);
  printf("Zamieniając przekazany łańcuch znaków na liczbę całkowitą, otrzymamy wartość %d", atoiUpgraded(string));
}