#include <stdio.h>
#include <string.h>

int main(void)
{
  char lineOfText[256];
  printf("Wprowadź do programu linię tekstu: ");
  fgets(lineOfText, 256, stdin);
  printf("Wprowadzona linia tekstu od tyłu wygląda następująco: ");
  for (int i = strlen(lineOfText) - 2; i >= 0; i--)
    printf("%c", lineOfText[i]);
}