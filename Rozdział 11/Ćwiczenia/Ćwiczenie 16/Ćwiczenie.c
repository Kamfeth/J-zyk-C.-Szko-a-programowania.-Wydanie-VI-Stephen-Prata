#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char nameOfFavouriteAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
  while (fgets(nameOfFavouriteAnime, 31, stdin))
  {
    nameOfFavouriteAnime[strlen(nameOfFavouriteAnime) - 1] = '\0';
    if (argc == 2 && (!strcmp(argv[1], "-u") || !strcmp(argv[1], "-l")))
    {
      for (int i = 0; i < strlen(nameOfFavouriteAnime); i++)
        nameOfFavouriteAnime[i] = !strcmp(argv[1], "-u") ? toupper(nameOfFavouriteAnime[i]) : tolower(nameOfFavouriteAnime[i]);
    }
    printf("Wprowadzona nazwa anime to: %s\n", nameOfFavouriteAnime);
    printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
  }
  printf("\nZakończono działanie programu, życzę miłego dnia!\n");
}