#include <stdio.h>

void saveValuesIntoMatrix(double matrix[3][5])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Wprowadź liczbę #%d ze zbioru #%d: ", j + 1, i + 1);
      scanf("%lf", &matrix[i][j]);
    }
  }
}

double calculateAverageOfSet(const double set[5])
{
  return (set[0] + set[1] + set[2] + set[3] + set[4]) / 5;
}

double calculateAverageOfMatrix(const double matrix[3][5])
{
  double averageOfMatrixValues = 0.0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
      averageOfMatrixValues += matrix[i][j];
  }
  return averageOfMatrixValues / 15;
}

double getBiggestValueFromMatrix(const double matrix[3][5])
{
  double biggestValueFromMatrix = matrix[0][0];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (matrix[i][j] > biggestValueFromMatrix)
        biggestValueFromMatrix = matrix[i][j];
    }
  }
  return biggestValueFromMatrix;
}

void printResultsOfOtherFunctions(const double matrix[3][5])
{
  printf("\nWartości macierzy:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
      printf("%.2lf ", matrix[i][j]);
    putchar('\n');
  }
  for (int i = 0; i < 3; i++)
    printf("\nŚrednia dla zbioru #%d wynosi: %.2lf", i + 1, calculateAverageOfSet(matrix[i]));
  printf("\n\nŚrednia wszystkich wartości macierzy wynosi: %.2lf\n\n", calculateAverageOfMatrix(matrix));
  printf("Największa wartość w macierzy wynosi: %.2lf", getBiggestValueFromMatrix(matrix));
}

int main(void)
{
  printf("Wprowadź po kolei 15 liczb rzeczywistych, po 5 dla każdego z trzech zbiorów:\n");
  double matrix[3][5];
  saveValuesIntoMatrix(matrix);
  printResultsOfOtherFunctions(matrix);
}