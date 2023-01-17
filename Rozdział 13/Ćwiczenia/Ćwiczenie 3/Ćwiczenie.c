#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char sourceFileName[31], targetFileName[31], character;
  printf("Wprowadź nazwę źródłowego pliku tekstowego (maksymalnie do 30 znaków): ");
  fgets(sourceFileName, 31, stdin);
  sourceFileName[strlen(sourceFileName) - 1] = '\0';
  printf("Wprowadź nazwę docelowego pliku tekstowego (maksymalnie do 30 znaków): ");
  fgets(targetFileName, 31, stdin);
  targetFileName[strlen(targetFileName) - 1] = '\0';
  FILE *sourceFile = fopen(sourceFileName, "r"), *targetFile = fopen(targetFileName, "w");
  printf("Program skopiował zawartośc pliku %s do %s, ale jest zapisana dużymi literami.\n", sourceFileName, targetFileName);
  printf("Treść pliku %s wygląda następująco:\n\n", targetFileName);
  while ((character = fgetc(sourceFile)) != EOF)
  {
    fputc(toupper(character), targetFile);
    fputc(toupper(character), stdout);
  }
  fclose(sourceFile);
  fclose(targetFile);
}