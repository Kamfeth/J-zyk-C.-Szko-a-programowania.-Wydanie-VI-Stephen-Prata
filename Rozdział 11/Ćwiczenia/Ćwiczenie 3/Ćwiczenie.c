#include <stdio.h>

void saveWordIntoString(char *string)
{
  char character;
  while ((character = getchar()) && character != ' ' && character != '\t' && character != '\n')
    *string++ = character;
  *string = '\0';
}

int main(void)
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (długość nazwy to maksymalnie 30 znaków): ");
  saveWordIntoString(nameOfFavouriteAnime);
  printf("Wprowadzona nazwa anime (do 30 wprowadzonych znaków): %s", nameOfFavouriteAnime);
}