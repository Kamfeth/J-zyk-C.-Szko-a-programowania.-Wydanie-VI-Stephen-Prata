#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMenu(void)
{
  printf("Wybierz jedno z dzialan:\n");
  printf("a. dodawanie      b. odejmowanie\n");
  printf("c. mnozenie       d. dzielenie\n");
  printf("k. koniec\n");
}

bool isNumberInvalid(const char *firstNumber, const char *secondNumber, const char operation)
{
  if (operation == 'd' && (strcmp(secondNumber, "0") == 0 || strcmp(secondNumber, "0.0") == 0))
  {
    printf("Podaj liczbe inna niz 0: ");
    return true;
  }
  else if (atof(firstNumber) == 0 || atof(secondNumber) == 0)
  {
    printf("%s nie jest liczba.\nPodaj liczbe, np. 2.5, -178E8 czy 3: ", atof(firstNumber) == 0 ? firstNumber : secondNumber);
    return true;
  }
  return false;
}

char getOperationSymbol(const char operation)
{
  switch (operation)
  {
    case 'a': return '+';
    case 'b': return '-';
    case 'c': return '*';
    case 'd': return '/';
  }
}

float calculateTwoNumbers(const float firstNumber, const float secondNumber, const char operationSymbol)
{
  switch (operationSymbol)
  {
    case '+': return firstNumber + secondNumber;
    case '-': return firstNumber - secondNumber;
    case '*': return firstNumber * secondNumber;
    case '/': return firstNumber / secondNumber;
  }
}

int main(void)
{
  char operation;
  char firstNumber[11], secondNumber[11] = "-1";
  printMenu();
  while ((operation = tolower(getchar())) != 'k')
  {
    if (operation != 'a' && operation != 'b' && operation != 'c' && operation != 'd')
    {
      printf("Wybrano nieprawidłową opcję, powracam do menu głównego\n\n");
      printMenu();
      getchar();
      continue;
    }
    printf("Podaj pierwsza liczbe: ");
    scanf("%s", firstNumber);
    while (isNumberInvalid(firstNumber, secondNumber, operation))
      scanf("%s", firstNumber);
    printf("Podaj druga liczbe: ");
    scanf("%s", secondNumber);
    while (isNumberInvalid(firstNumber, secondNumber, operation))
      scanf("%s", secondNumber);
    const float resultOfCalculations = calculateTwoNumbers(atof(firstNumber), atof(secondNumber), getOperationSymbol(operation));
    printf("%g %c %g = %g\n", atof(firstNumber), getOperationSymbol(operation), atof(secondNumber), resultOfCalculations);
    printMenu();
    getchar();
  }
  printf("Koniec.");
}