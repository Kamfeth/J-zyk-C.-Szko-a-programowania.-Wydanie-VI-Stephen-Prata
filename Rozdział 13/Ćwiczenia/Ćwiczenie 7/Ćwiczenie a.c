#include <stdio.h>

void printLineOfTextFromFile(FILE *firstFile, FILE *secondFile, const int number, const char *firstLine, const char *secondLine)
{
  if (!feof(firstFile))
  {
    printf("%d. ", number);
    fputs(firstLine, stdout);
  }
  else if (!feof(secondFile))
  {
    printf("%d. ", number);
    fputs(secondLine, stdout);
  }
}

int main(int argc, char *argv[])
{
  FILE *firstFile = fopen(argv[1], "r"), *secondFile = fopen(argv[2], "r");
  char lineOfTextFromFirstFile[61], lineOfTextFromSecondFile[61];
  int currentLineNumberFromFile = 1;
  printf("Otworzono dwa pliki: %s oraz %s. Poniżej wyświetlona jest na przemian zawartość tych plików:\n\n", argv[1], argv[2]);
  while (fgets(lineOfTextFromFirstFile, 61, firstFile) && fgets(lineOfTextFromSecondFile, 61, secondFile))
  {
    printf("%d. ", currentLineNumberFromFile);
    fputs(lineOfTextFromFirstFile, stdout);
    printf("%d. ", currentLineNumberFromFile++);
    fputs(lineOfTextFromSecondFile, stdout);
  }
  if (feof(firstFile))
    fgets(lineOfTextFromSecondFile, 61, secondFile);
  printLineOfTextFromFile(firstFile, secondFile, currentLineNumberFromFile, lineOfTextFromFirstFile, lineOfTextFromSecondFile);
  currentLineNumberFromFile++;
  while (fgets(lineOfTextFromFirstFile, 61, firstFile) || fgets(lineOfTextFromSecondFile, 61, secondFile))
  {
    printLineOfTextFromFile(firstFile, secondFile, currentLineNumberFromFile, lineOfTextFromFirstFile, lineOfTextFromSecondFile);
    currentLineNumberFromFile++;
  }
  fclose(firstFile);
  fclose(secondFile);
}