#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMenu(void)
{
  printf("\n*****************************************************************************************************************\n");
  printf("Dostępne opcje umożliwiające pracę na wprowadzonej liście ulubionych anime:\n");
  printf("1) Wyświetlenie pierwotnej listy łańcuchów              2) Wyświetlenie łańcuchów w porządku ASCII \n");
  printf("3) Wyświetlenie łańcuchów według długości (rosnąco)     4) Wyświetlenie łańcuchów według długości pierwszego słowa\n");
  printf("5) Koniec\n");
  printf("*****************************************************************************************************************\n\n");
  printf("Wybierz opcję: ");
}

void printListOfAnimes(const int sizeOfList, const int maxLengthOfName, const char animes[sizeOfList][maxLengthOfName])
{
  printf("Oto lista ulubionych anime, które zostały przez Ciebie wprowadzone:\n");
  for (int i = 0; i < sizeOfList; i++)
    printf("Anime #%d: %s\n", i + 1, animes[i]);
}

void printAnimesInASCIIOrder(const int sizeOfList, const int maxLengthOfName, const char animes[sizeOfList][maxLengthOfName])
{
  char copyOfAnimes[sizeOfList][maxLengthOfName];
  for (int i = 0; i < sizeOfList; i++)
    strcpy(copyOfAnimes[i], animes[i]);
  qsort(copyOfAnimes, sizeof(copyOfAnimes) / sizeof(copyOfAnimes[0]), sizeof(copyOfAnimes[0]), (__compar_fn_t)strcmp);
  printf("Oto lista ulubionych anime, która jest przedstawiona według porządku znaków ASCII:\n");
  for (int i = 0; i < sizeOfList; i++)
    printf("Anime #%d: %s\n", i + 1, copyOfAnimes[i]);
}

int compareStringsByLength(const void *firstString, const void *secondString)
{
  return strlen(firstString) < strlen(secondString) ? -1 : strlen(firstString) == strlen(secondString) ? 0 : 1;
}

void printAnimesByAscendingLength(const int sizeOfList, const int maxLengthOfName, const char animes[sizeOfList][maxLengthOfName])
{
  char copyOfAnimes[sizeOfList][maxLengthOfName];
  for (int i = 0; i < sizeOfList; i++)
    strcpy(copyOfAnimes[i], animes[i]);
  qsort(copyOfAnimes, sizeof(copyOfAnimes) / sizeof(copyOfAnimes[0]), sizeof(copyOfAnimes[0]), compareStringsByLength);
  printf("Oto lista ulubionych anime, która jest przedstawiona według rosnącej długości tytułów:\n");
  for (int i = 0; i < sizeOfList; i++)
    printf("Anime #%d: %s\n", i + 1, copyOfAnimes[i]);
}

int compareStringsByLengthOfFirstWord(const void *firstString, const void *secondString)
{
  const int lengthOfFirstString = strnlen(firstString, strchr(firstString, ' ') - (char*)firstString);
  const int lengthOfSecondString = strnlen(secondString, strchr(secondString, ' ') - (char*)secondString);
  return lengthOfFirstString < lengthOfSecondString ? -1 : lengthOfFirstString == lengthOfSecondString ? 0 : 1;
}

void printAnimesByLenOfFirstWord(const int sizeOfList, const int maxLengthOfName, const char animes[sizeOfList][maxLengthOfName])
{
  char copyOfAnimes[sizeOfList][maxLengthOfName];
  for (int i = 0; i < sizeOfList; i++)
    strcpy(copyOfAnimes[i], animes[i]);
  qsort(copyOfAnimes, sizeof(copyOfAnimes) / sizeof(copyOfAnimes[0]), sizeof(copyOfAnimes[0]), compareStringsByLengthOfFirstWord);
  printf("Oto lista ulubionych anime, która jest przedstawiona według rosnącej długości pierwszego słowa tytułu:\n");
  for (int i = 0; i < sizeOfList; i++)
    printf("Anime #%d: %s\n", i + 1, copyOfAnimes[i]);
}

void handleChoosedOption(const char option, const int size, const int maxLengthOfName, const char animes[size][maxLengthOfName])
{
  switch (option)
  {
    case '1':
      printListOfAnimes(size, maxLengthOfName, animes);
      return;
    case '2':
      printAnimesInASCIIOrder(size, maxLengthOfName, animes);
      return;
    case '3':
      printAnimesByAscendingLength(size, maxLengthOfName, animes);
      return;
    case '4':
      printAnimesByLenOfFirstWord(size, maxLengthOfName, animes);
      return;
  }
}

void getInputFromUser(char *string, const int maximumLengthOfString)
{
  if (fgets(string, maximumLengthOfString, stdin))
  {
    if (strchr(string, '\n'))
      *strchr(string, '\n') = '\0';
    else
    {
      while (getchar() != '\n')
        continue;
    }
  }
}

int main(void)
{
  char namesOfFavouriteAnimes[10][31];
  int numberOfProvidedAnimes = 0;
  printf("Wprowadź do dziesięciu nazw ulubionych anime (tylko do 30 znaków, wprowadzenie znaku EOF kończy pobieranie danych\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Wprowadź nazwę ulubionego anime #%d: ", i + 1);
    getInputFromUser(namesOfFavouriteAnimes[i], 31);
    if (feof(stdin))
    {
      printf("\nWprowadzono znak EOF - udało się odczytać tylko %d anime", numberOfProvidedAnimes);
      clearerr(stdin);
      break;
    }
    numberOfProvidedAnimes++;
  }
  printMenu();
  char choosedOption;
  while ((choosedOption = getchar()) != '5')
  {
    if (choosedOption != '1' && choosedOption != '2' && choosedOption != '3' && choosedOption != '4')
    {
      printf("Wybrano nieprawidłową opcję, powracam do menu głównego\n\n");
      printMenu();
      getchar();
      continue;
    }
    handleChoosedOption(choosedOption, numberOfProvidedAnimes, 31, namesOfFavouriteAnimes);
    printMenu();
    getchar();
  }
  printf("\nZakończono działanie programu, życzę miłego dnia!\n");
}