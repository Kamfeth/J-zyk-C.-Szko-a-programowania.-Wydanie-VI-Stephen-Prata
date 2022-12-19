#include <stdio.h>

void saveWordIntoString(const int sizeOfString, char *string)
{
  char character;
  int lengthOfStr = 0;
  while ((character = getchar()) && character != ' ' && character != '\t' && character != '\n' && lengthOfStr < sizeOfString - 1)
  {
    *string++ = character;
    lengthOfStr++;
  }
  *string = '\0';
}

int main(void)
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (długość nazwy to maksymalnie 30 znaków): ");
  saveWordIntoString(31, nameOfFavouriteAnime);
  printf("Wprowadzona nazwa anime (do 30 wprowadzonych znaków): %s", nameOfFavouriteAnime);
}