#include <stdio.h>
#include <string.h>

int main(void)
{
  char nameOfFile[51], lineOfFile[61];
  printf("Podaj nazwę pliku, który chcesz otworzyć: ");
  fgets(nameOfFile, 51, stdin);
  nameOfFile[strlen(nameOfFile) - 1] = '\0';
  FILE *file = fopen(nameOfFile, "r");
  fseek(file, 0, SEEK_END);
  int positionInFile, numberOfBytesInFile = ftell(file);
  printf("Wprowadź pozycję w pliku jako liczbę (wpisanie liczby ujemnej lub danych nieliczbowych kończy podawanie danych): ");
  while (scanf("%d", &positionInFile) && positionInFile >= 0)
  {
    fseek(file, positionInFile, SEEK_SET);
    if (ftell(file) > numberOfBytesInFile)
      printf("Pozycja #%d jest poza zasięgiem zawartości pliku %s. Wprowadź mniejszą liczbę\n", positionInFile, nameOfFile);
    else
    {
      fgets(lineOfFile, 61, file);
      printf("Fragment tekstu od pozycji %d do końca wiersza wygląda następująco: %s", positionInFile, lineOfFile);
    }
    printf("Wprowadź pozycję w pliku jako liczbę (wpisanie liczby ujemnej lub danych nieliczbowych kończy podawanie danych): ");
  }
  fclose(file);
  printf("Koniec programu - życzę udanego dnia!\n");
}