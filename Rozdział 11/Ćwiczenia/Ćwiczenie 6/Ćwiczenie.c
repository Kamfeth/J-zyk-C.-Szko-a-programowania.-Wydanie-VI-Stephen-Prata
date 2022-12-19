#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool znajduje_sie_w(const char znakDoOdnalezienia, const char *lancuch)
{
  return strchr(lancuch, znakDoOdnalezienia);
}

int main(void)
{
  char nazwaUlubionegoAnime[31];
  printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
  while (fgets(nazwaUlubionegoAnime, 31, stdin))
  {
    nazwaUlubionegoAnime[strlen(nazwaUlubionegoAnime) - 1] = '\0';
    printf("Wprowadź znak, który chcesz odnaleźć we wprowadzonej nazwie anime: ");
    const char znakDoOdnalezienia = getchar();
    if (znajduje_sie_w(znakDoOdnalezienia, nazwaUlubionegoAnime))
      printf("Udało się odnaleźć znak '%c' w anime o nazwie: %s\n", znakDoOdnalezienia, nazwaUlubionegoAnime);
    else
      printf("Nie udało się odnaleźć znaku '%c' w anime o nazwie: %s\n", znakDoOdnalezienia, nazwaUlubionegoAnime);
    printf("Wprowadź nazwę swojego ulubionego anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy działanie programu): ");
    getchar();
  }
  printf("\nZakończono działanie programu, życzę miłego dnia!\n");
}