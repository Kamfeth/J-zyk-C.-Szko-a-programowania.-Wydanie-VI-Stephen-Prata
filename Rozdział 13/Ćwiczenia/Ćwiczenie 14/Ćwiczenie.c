#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void createPictureFromMatrix(const int rows, const int columns, const int matrix[rows][columns], char picture[rows][columns + 1])
{
  const char chars[] = " .':~*=?%#";
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 30; j++)
    {
      bool isValueNeedsToBeImproved = true;
      int numberOfNeighbours = 0;
      double sumOfNeighbours = 0.0;
      if (i - 1 >= 0)
      {
        if (abs(matrix[i - 1][j] - matrix[i][j]) <= 1)
          isValueNeedsToBeImproved = false;
        sumOfNeighbours += matrix[i - 1][j];
        numberOfNeighbours++;
      }
      if (j + 1 <= 29)
      {
        if (abs(matrix[i][j + 1] - matrix[i][j]) <= 1)
          isValueNeedsToBeImproved = false;
        sumOfNeighbours += matrix[i][j + 1];
        numberOfNeighbours++;
      }
      if (i + 1 <= 19)
      {
        if (abs(matrix[i + 1][j] - matrix[i][j]) <= 1)
          isValueNeedsToBeImproved = false;
        sumOfNeighbours += matrix[i + 1][j];
        numberOfNeighbours++;
      }
      if (j - 1 >= 0)
      {
        if (abs(matrix[i][j - 1] - matrix[i][j]) <= 1)
          isValueNeedsToBeImproved = false;
        sumOfNeighbours += matrix[i][j - 1];
        numberOfNeighbours++;
      }
      picture[i][j] = isValueNeedsToBeImproved ? chars[(int)round(sumOfNeighbours / numberOfNeighbours)] : chars[matrix[i][j]];
    }
    picture[i][30] = '\0';
  }
}

int main(void)
{
  char graphicRepresentationOfMatrix[20][31];
  FILE *inputFile = fopen("Macierz.txt", "r"), *outputFile = fopen("Graficzna reprezentacja macierzy.txt", "w");
  int matrix[20][30];
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 30; j++)
      fscanf(inputFile, "%d", &matrix[i][j]);
  }
  fclose(inputFile);
  createPictureFromMatrix(20, 30, matrix, graphicRepresentationOfMatrix);
  printf("Poniżej jest graficzna reprezentacja wejściowego pliku macierzy, wynik ten został zapisany w wyjściowym pliku:\n\n");
  for (int i = 0; i < 20; i++)
  {
    puts(graphicRepresentationOfMatrix[i]);
    fprintf(outputFile, "%s\n", graphicRepresentationOfMatrix[i]);
  }
  fclose(outputFile);
}