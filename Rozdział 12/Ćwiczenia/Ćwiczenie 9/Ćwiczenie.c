#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int numberOfWords;
  printf("Podaj liczbe slow do wprowadzenia: ");
  scanf("%d", &numberOfWords);
  printf("Wprowadz %d slow:\n", numberOfWords);
  char **words = malloc(numberOfWords * sizeof(char*));
  char temporaryString[21];
  for (int i = 0; i < numberOfWords; i++)
  {
    scanf("%s", temporaryString);
    char *word = malloc((strlen(temporaryString) + 1) * sizeof(char));
    strcpy(word, temporaryString);
    words[i] = word;
  }
  printf("Oto wprowadzone slowa:\n");
  for (int i = 0; i < numberOfWords; i++)
    printf("%s\n", words[i]);
  free(words);
}