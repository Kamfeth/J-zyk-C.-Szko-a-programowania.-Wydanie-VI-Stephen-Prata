#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("Program wylosuje 1000 liczb całkowitych z przedziału od 1 do 10. Procedura ta zostanie powtórzona łącznie 10 razy.\n");
  for (int i = 0; i < 10; i++)
  {
    printf("\nLosowanie #%d:\n\n", i + 1);
    int numberOfOccurencesOfDrawnNumbers[10] = {};
    srand(time(NULL) + i);
    for (int j = 0; j < 1000; j++)
    {
      const int drawnNumber = rand() % 10 + 1;
      numberOfOccurencesOfDrawnNumbers[drawnNumber - 1]++;
    }
    for (int j = 0; j < 10; j++)
      printf("Liczba %d została wylosowana %d razy.\n", j + 1, numberOfOccurencesOfDrawnNumbers[j]);
  }
  // Nie, dla każdego losowania liczby pojawiały się zawsze w różnych ilościach.
}