#include <stdio.h>

int main(void)
{
  int codeOfASCIICharacter;
  printf("Podaj kod znaku ASCII: ");
  scanf("%d", &codeOfASCIICharacter);
  printf("Znak odpowiadający wprowadzonemu kodowi to: %c", codeOfASCIICharacter);
}