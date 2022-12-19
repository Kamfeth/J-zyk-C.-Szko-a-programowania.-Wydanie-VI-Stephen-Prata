#include <stdio.h>

char* strncpyUpgraded(char *destionationString, const char *sourceString, const int maximumNumberOfCharactersToCopy)
{
  for (int i = 0; i < maximumNumberOfCharactersToCopy; i++)
    destionationString[i] = sourceString[i];
  destionationString[maximumNumberOfCharactersToCopy] = '\0';
  return destionationString;
}

int main(void)
{
  char favouriteAnime[31];
  printf("Pierwsze 8 znaków wprowadzonej nazwy anime 'Demon Slayer': %s", strncpyUpgraded(favouriteAnime, "Demon Slayer", 8));
}