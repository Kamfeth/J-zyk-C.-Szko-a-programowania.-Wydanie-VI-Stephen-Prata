#include <stdio.h>

int main(int argc, char *argv[])
{
  char characterFromInput;
  if (argc < 2)
  {
    fprintf(stderr, "Wprowadzono za mało parametrów wejściowych - kontynuowanie programu jest niemożliwe\n");
    return 1;
  }
  else if (argc > 2)
  {
    printf("Wprowadzono %d parametrów wejściowych - zaczynam ich przetwarzanie\n\n", argc - 1);
    for (int i = 2; i < argc; i++)
    {
      FILE *file = fopen(argv[i], "r");
      if (!file)
      {
        fprintf(stderr, "Nie udało się otworzyć pliku %s - przechodzę do następnej iteracji pętli\n", argv[i]);
        continue;
      }
      int numberOfOccurencesOfCharacterInFile = 0;
      while ((characterFromInput = getc(file)) != EOF)
      {
        if (characterFromInput == argv[1][0])
          numberOfOccurencesOfCharacterInFile++;
      }
      fclose(file);
      printf("Znak %c łącznie wystąpił w pliku %s %d razy\n", argv[1][0], argv[i], numberOfOccurencesOfCharacterInFile);
    }
  }
  else
  {
    int numberOfOccurencesInString = 0;
    printf("Wprowadzono tylko jeden parametr - wprowadź tekst wiersz po wierszu (zasymulowanie znaku EOF kończy wprowadzanie): ");
    while ((characterFromInput = getchar()) != EOF)
    {
      if (characterFromInput == argv[1][0])
        numberOfOccurencesInString++;
    }
    printf("\nZnak %c łącznie wystąpił we wprowadzonym tekście %d razy\n", argv[1][0], numberOfOccurencesInString);
  }
}