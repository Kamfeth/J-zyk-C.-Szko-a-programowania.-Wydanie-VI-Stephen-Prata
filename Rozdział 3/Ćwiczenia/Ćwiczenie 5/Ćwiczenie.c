#include <stdio.h>

int main(void)
{
  int age;
  printf("Podaj swój wiek w latach: ");
  scanf("%d", &age);
  printf("%d lat jest równe %lld sekund", age, age * 31560000000LL);
}