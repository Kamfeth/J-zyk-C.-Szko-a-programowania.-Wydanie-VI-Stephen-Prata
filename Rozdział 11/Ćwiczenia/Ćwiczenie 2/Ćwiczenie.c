#include <stdio.h>
#include <string.h>

void saveLimitedNumberOfCharactersIntoString(const int numberOfCharacters, char *string)
{
  fgets(string, numberOfCharacters, stdin);
  for (int i = 0; i < strlen(string); i++)
  {
    if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n')
      string[i] = '\0';
  }
}

int main(void)
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (długość nazwy to maksymalnie 30 znaków): ");
  saveLimitedNumberOfCharactersIntoString(31, nameOfFavouriteAnime);
  printf("Wprowadzona nazwa anime (do 30 wprowadzonych znaków): %s", nameOfFavouriteAnime);
}