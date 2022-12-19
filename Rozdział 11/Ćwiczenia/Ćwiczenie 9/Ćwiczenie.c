#include <stdio.h>
#include <string.h>

void reverseString(char *string)
{
  for (int i = 0; i < strlen(string) / 2; i++)
  {
    const char temporaryCharacter = string[i];
    string[i] = string[strlen(string) - i - 1];
    string[strlen(string) - i - 1] = temporaryCharacter;
  }
}

int main(void)
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
  while (fgets(nameOfFavouriteAnime, 31, stdin))
  {
    nameOfFavouriteAnime[strlen(nameOfFavouriteAnime) - 1] = '\0';
    reverseString(nameOfFavouriteAnime);
    printf("Wprowadzona nazwa anime od tyłu wygląda następująco: %s\n", nameOfFavouriteAnime);
    printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
  }
  printf("\nZakończono działanie programu, życzę miłego dnia!\n");
}