#include <stdio.h>

void saveValuesIntoMatrix(const int rows, const int columns, double matrix[rows][columns])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("Wprowadź liczbę #%d ze zbioru #%d: ", j + 1, i + 1);
      scanf("%lf", &matrix[i][j]);
    }
  }
}

double calculateAverageOfSet(const int sizeOfArray, const double set[sizeOfArray])
{
  return (set[0] + set[1] + set[2] + set[3] + set[4]) / 5;
}

double calculateAverageOfMatrix(const int rows, const int columns, const double matrix[rows][columns])
{
  double averageOfMatrixValues = 0.0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
      averageOfMatrixValues += matrix[i][j];
  }
  return averageOfMatrixValues / 15;
}

double getBiggestValueFromMatrix(const int rows, const int columns, const double matrix[rows][columns])
{
  double biggestValueFromMatrix = matrix[0][0];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      if (matrix[i][j] > biggestValueFromMatrix)
        biggestValueFromMatrix = matrix[i][j];
    }
  }
  return biggestValueFromMatrix;
}

void printResultsOfOtherFunctions(const int rows, const int columns, const double matrix[rows][columns])
{
  printf("\nWartości macierzy:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
      printf("%.2lf ", matrix[i][j]);
    putchar('\n');
  }
  for (int i = 0; i < 3; i++)
    printf("\nŚrednia dla zbioru #%d wynosi: %.2lf", i + 1, calculateAverageOfSet(5, matrix[i]));
  printf("\n\nŚrednia wszystkich wartości macierzy wynosi: %.2lf\n\n", calculateAverageOfMatrix(3, 5, matrix));
  printf("Największa wartość w macierzy wynosi: %.2lf", getBiggestValueFromMatrix(3, 5, matrix));
}

int main(void)
{
  printf("Wprowadź po kolei 15 liczb rzeczywistych, po 5 dla każdego z trzech zbiorów:\n");
  double matrix[3][5];
  saveValuesIntoMatrix(3, 5, matrix);
  printResultsOfOtherFunctions(3, 5, matrix);
}