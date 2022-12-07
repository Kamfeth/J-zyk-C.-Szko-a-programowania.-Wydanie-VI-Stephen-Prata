#include <stdio.h>

void printValuesOfMatrix(const int matrix[][5], const int numberOfRows)
{
  for (int i = 0; i < numberOfRows; i++)
  {
    for (int j = 0; j < 5; j++)
      printf("%d ", matrix[i][j]);
    putchar('\n');
  }
}

void doubleValuesOfMatrix(int matrix[][5], const int numberOfRows)
{
  for (int i = 0; i < numberOfRows; i++)
  {
    for (int j = 0; j < 5; j++)
      matrix[i][j] *= 2;
  }
}

int main(void)
{
  int matrix[3][5] = {{2, 1, 3, 7, 4}, {1, 3, 3, 7, 2}, {4, 0, 3, 9, 2}};
  printf("Macierz po początkowej inicjalizacji:\n");
  printValuesOfMatrix(matrix, 3);
  doubleValuesOfMatrix(matrix, 3);
  printf("\nMacierz po podwojeniu jej wszystkich wartości:\n");
  printValuesOfMatrix(matrix, 3);
}