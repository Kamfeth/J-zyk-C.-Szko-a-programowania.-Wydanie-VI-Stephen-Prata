#include <stdio.h>
#include <string.h>

char* findFirstOccurenceOfCharacter(char *string, const char characterToFind)
{
  for (int i = 0; i < strlen(string); i++)
  {
    if (string[i] == characterToFind)
      return &string[i];
  }
  return NULL;
}

int main(void)
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
  while (fgets(nameOfFavouriteAnime, 31, stdin))
  {
    nameOfFavouriteAnime[strlen(nameOfFavouriteAnime) - 1] = '\0';
    printf("Wprowadź znak, który chcesz odnaleźć we wprowadzonej nazwie anime: ");
    const char character = getchar();
    if (findFirstOccurenceOfCharacter(nameOfFavouriteAnime, character))
    {
      const int indexOfFirstOccurence = findFirstOccurenceOfCharacter(nameOfFavouriteAnime, character) - nameOfFavouriteAnime;
      printf("Znak '%c' w anime %s znajduje się na indeksie: %d\n", character, nameOfFavouriteAnime, indexOfFirstOccurence);
    }
    else
      printf("Znak '%c' nie został odnaleziony w anime %s\n", character, nameOfFavouriteAnime);
    printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
    getchar();
  }
  printf("\nZakończono działanie programu, życzę miłego dnia!\n");
}