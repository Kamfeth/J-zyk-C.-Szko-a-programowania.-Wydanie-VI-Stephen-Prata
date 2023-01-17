#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *file = fopen(argv[2], "r");
  printf("Jako parametr podano znak %c. Poniżej znajduje się lista wierszy z pliku, które zawierają ten znak\n\n", argv[1][0]);
  char lineOfText[257];
  while (fgets(lineOfText, 257, file))
  {
    if (strchr(lineOfText, argv[1][0]))
      fputs(lineOfText, stdout);
  }
  fclose(file);
}