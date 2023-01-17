#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *file = fopen(argv[2], "r");
  char lineOfText[256];
  printf("Poniżej znajduje się lista wierszy z pliku %s, które zawierają w sobie łańcuch \"%s\"\n\n", argv[2], argv[1]);
  while (fgets(lineOfText, 256, file))
  {
    if (strstr(lineOfText, argv[1]))
      fputs(lineOfText, stdout);
  }
  fclose(file);
}