#include <stdio.h>

void copyMatrixIntoAnotherMatrix(const int r, const int c, const double sourceMatrix[r][c], double targetMatrix[r][c])
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
      targetMatrix[i][j] = sourceMatrix[i][j];
  }
}

void printValuesOfMatrix(const int numberOfRows, const int numberOfColumns, const double matrix[numberOfRows][numberOfColumns])
{
  for (int i = 0; i < numberOfRows; i++)
  {
    for (int j = 0; j < numberOfColumns; j++)
      printf("%.1lf ", matrix[i][j]);
    putchar('\n');
  }
}

int main(void)
{
  const double sourceMatrix[3][5] = {{5.6, 2.1, 9.8, 63.1, 2.5}, {6.5, 4.5, 1.2, 3.5, 65.1}, {95.2, 53.7, 12.5, 68.8, 32.2}};
  double targetMatrix[3][5];
  copyMatrixIntoAnotherMatrix(3, 5, sourceMatrix, targetMatrix);
  printf("Dane macierzy źródłowej:\n");
  printValuesOfMatrix(3, 5, sourceMatrix);
  printf("\nDane macierzy docelowej:\n");
  printValuesOfMatrix(3, 5, targetMatrix);
}