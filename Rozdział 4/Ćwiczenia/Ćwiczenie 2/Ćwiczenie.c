#include <stdio.h>
#include <string.h>

int main(void)
{
  char firstName[6];
  printf("Podaj swoje imię: ");
  scanf("%s", firstName);
  printf("Imię w cudzysłowie: \"%s\"\n", firstName);
  printf("Imię w cudzysłowie, o szerokości 20 znaków, przy prawej krawędzi: \"%20s\"\n", firstName);
  printf("Imię w cudzysłowie, o szerokości 20 znaków, przy lewej krawedzi: \"%-20s\"\n", firstName);
  printf("Imię wyświetlane w polu o trzy znaki dłuższym niż imię: %*s", (int)strlen(firstName) + 3, firstName);
}