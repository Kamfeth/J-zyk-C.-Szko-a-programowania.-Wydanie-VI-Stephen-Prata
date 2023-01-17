#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *sourceFile = fopen(argv[1], "rb"), *targetFile = fopen(argv[2], "wb");
  char character;
  while ((character = fgetc(sourceFile)) != EOF)
    fputc(character, targetFile);
  fclose(sourceFile);
  fclose(targetFile);
  printf("Pobrano nazwy plików %s oraz %s.\n", argv[1], argv[2]);
  printf("Program skopiował całą zawartośc pliku %s do %s\n", argv[1], argv[2]);
}