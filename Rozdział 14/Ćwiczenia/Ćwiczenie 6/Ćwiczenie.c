#include <stdio.h>
#include <string.h>

int main(void)
{
  struct Player
  {
    char firstName[21];
    char lastName[41];
    int numberOfTwoPointsThrows;
    int numberOfAccurateTwoPointsThrows;
    int numberOfAssists;
    int numberOfFouls;
    double efficiency;
  };
  FILE *f = fopen("Statystyki graczy.txt", "r");
  int index, totalThrows, accurateTwoPointsThrows, assists, fouls;
  char fName[21], lName[41];
  struct Player teamPlayers[19] = {};
  while (fscanf(f, "%d%s%s%d%d%d%d", &index, fName, lName, &totalThrows, &accurateTwoPointsThrows, &assists, &fouls) != EOF)
  {
    strcpy(teamPlayers[index].firstName, fName);
    strcpy(teamPlayers[index].lastName, lName);
    teamPlayers[index].numberOfTwoPointsThrows += totalThrows;
    teamPlayers[index].numberOfAccurateTwoPointsThrows += accurateTwoPointsThrows;
    teamPlayers[index].numberOfAssists += assists;
    teamPlayers[index].numberOfFouls += fouls;
  }
  fclose(f);
  int totalTwoPointsThrows = 0, totalAccurateTwoPointsThrows = 0, totalNumberOfAssists = 0, totalNumberOfFouls = 0, players = 0;
  double teamEfficiency = 0.0;
  printf("Wczytano dane dotyczące zawodników drużyny koszykarskiej.\n\nOto lista zawodników wraz ze statystykami:\n\n");
  for (int i = 0; i < 19; i++)
  {
    if (teamPlayers[i].numberOfTwoPointsThrows != 0)
      teamPlayers[i].efficiency = 1.0 * teamPlayers[i].numberOfAccurateTwoPointsThrows / teamPlayers[i].numberOfTwoPointsThrows;
    if (teamPlayers[i].firstName[0] != '\0')
    {
      printf("Imię i nazwisko zawodnika: %s %s\n", teamPlayers[i].firstName, teamPlayers[i].lastName);
      printf("Liczba rzutów za 2 punkty: %d\n", teamPlayers[i].numberOfTwoPointsThrows);
      printf("Liczba rzutów trafionych: %d\n", teamPlayers[i].numberOfAccurateTwoPointsThrows);
      printf("Liczba asyst: %d\n", teamPlayers[i].numberOfAssists);
      printf("Liczba fauli: %d\n", teamPlayers[i].numberOfFouls);
      printf("Skuteczność: %.2lf\n\n", teamPlayers[i].efficiency);
      totalTwoPointsThrows += teamPlayers[i].numberOfTwoPointsThrows;
      totalAccurateTwoPointsThrows += teamPlayers[i].numberOfAccurateTwoPointsThrows;
      totalNumberOfAssists += teamPlayers[i].numberOfAssists;
      totalNumberOfFouls += teamPlayers[i].numberOfFouls;
      teamEfficiency += teamPlayers[i].efficiency;
      players++;
    }
  }
  printf("Poniżej znajdują się statystyki całej drużyny koszykarskiej:\n\n");
  printf("Sumaryczna liczba rzutów za 2 punkty: %d\n", totalTwoPointsThrows);
  printf("Sumaryczna liczba rzutów trafionych: %d\n", totalAccurateTwoPointsThrows);
  printf("Sumaryczna liczba asyst: %d\n", totalNumberOfAssists);
  printf("Sumaryczna liczba fauli: %d\n", totalNumberOfFouls);
  printf("Średnia skuteczności wszystkich zawodników: %.2lf\n\n", teamEfficiency / players);
  printf("Życzę miłego dnia!\n");
}