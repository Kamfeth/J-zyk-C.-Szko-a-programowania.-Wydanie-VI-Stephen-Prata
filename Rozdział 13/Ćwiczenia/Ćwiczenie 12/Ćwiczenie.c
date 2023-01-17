#include <stdio.h>

int main(void)
{
  char graphicRepresentationOfMatrix[20][31], characters[] = " .':~*=?%#";
  FILE *inputFile = fopen("Macierz.txt", "r"), *outputFile = fopen("Graficzna reprezentacja macierzy.txt", "w");
  int matrix[20][30];
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 30; j++)
    {
      fscanf(inputFile, "%d", &matrix[i][j]);
      graphicRepresentationOfMatrix[i][j] = characters[matrix[i][j]];
    }
    graphicRepresentationOfMatrix[i][30] = '\0';
  }
  fclose(inputFile);
  printf("Poniżej jest graficzna reprezentacja wejściowego pliku macierzy, wynik ten został zapisany w wyjściowym pliku:\n\n");
  for (int i = 0; i < 20; i++)
  {
    puts(graphicRepresentationOfMatrix[i]);
    fprintf(outputFile, "%s\n", graphicRepresentationOfMatrix[i]);
  }
  fclose(outputFile);
}