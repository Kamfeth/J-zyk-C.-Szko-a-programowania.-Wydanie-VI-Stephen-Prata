#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Program wypisze na ekran sekwencyjnie treść każdego pliku, który zostanie podany w wierszu poleceń\n");
  for (int i = 1; i < argc; i++)
  {
    FILE *file = fopen(argv[i], "r");
    char character;
    printf("\nPoniżej znajduje się treść pliku o nazwie: %s\n\n", argv[i]);
    while ((character = fgetc(file)) != EOF)
      putchar(character);
    fclose(file);
  }
}