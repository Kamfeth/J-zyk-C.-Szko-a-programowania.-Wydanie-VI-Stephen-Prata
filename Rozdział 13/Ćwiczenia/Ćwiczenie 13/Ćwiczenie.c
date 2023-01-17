#include <stdio.h>

void saveValuesIntoMatrixes(FILE *inputFile, const int r, const int c, int matrix[r][c], char graphicMatrix[r][c + 1])
{
  const char characters[] = " .':~*=?%#";
  int temporaryNumber;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      fscanf(inputFile, "%d", &matrix[i][j]);
      graphicMatrix[i][j] = characters[matrix[i][j]];
    }
    graphicMatrix[i][c] = '\0';
    for (int j = 0; j < 30 - c; j++)
      fscanf(inputFile, "%d", &temporaryNumber);
  }
}

void generatePictureIntoConsoleAndIntoOutputFile(FILE *outputFile, const int r, const int c, const char graphicMatrix[r][c + 1])
{
  for (int i = 0; i < r; i++)
  {
    puts(graphicMatrix[i]);
    fprintf(outputFile, "%s\n", graphicMatrix[i]);
  }
}

int main(void)
{
  char graphicRepresentationOfMatrix[20][31];
  FILE *inputFile = fopen("Macierz.txt", "r"), *outputFile = fopen("Graficzna reprezentacja macierzy.txt", "w");
  int numberOfRows, numberOfColumns;
  printf("Wprowadź kolejno dla macierzy liczbę kolumn (maksymanie 20) oraz liczbę wierszy (maksymalnie 30): ");
  scanf("%d%d", &numberOfRows, &numberOfColumns);
  int matrix[numberOfRows][numberOfColumns];
  saveValuesIntoMatrixes(inputFile, numberOfRows, numberOfColumns, matrix, graphicRepresentationOfMatrix);
  fclose(inputFile);
  printf("Poniżej jest graficzna reprezentacja wejściowego pliku macierzy, wynik ten został zapisany w wyjściowym pliku:\n\n");
  generatePictureIntoConsoleAndIntoOutputFile(outputFile, numberOfRows, numberOfColumns, graphicRepresentationOfMatrix);
  fclose(outputFile);
}