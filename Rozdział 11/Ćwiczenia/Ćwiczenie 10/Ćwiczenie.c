#include <stdio.h>
#include <string.h>

void removeSpacesFromString(char *string)
{
  while (strchr(string, ' '))
    strncpy(strchr(string, ' '), strchr(string, ' ') + 1, string + strlen(string) - strchr(string, ' '));
}

int main(void)
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie pustego wiersza kończy program): ");
  while (fgets(nameOfFavouriteAnime, 31, stdin) && strcmp(nameOfFavouriteAnime, "\n"))
  {
    nameOfFavouriteAnime[strlen(nameOfFavouriteAnime) - 1] = '\0';
    removeSpacesFromString(nameOfFavouriteAnime);
    printf("Wprowadzona nazwa anime pozbawiona odstępów wygląda następująco: %s\n", nameOfFavouriteAnime);
    printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie pustego wiersza kończy program): ");
  }
  printf("\nZakończono działanie programu, życzę miłego dnia!\n");
}