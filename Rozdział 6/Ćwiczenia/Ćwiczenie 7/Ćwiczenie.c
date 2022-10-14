#include <stdio.h>
#include <string.h>

int main(void)
{
  char singleWord[21];
  printf("Wprowadź pojedyncze słowo: ");
  scanf("%s", singleWord);
  printf("Wprowadzone słowo od tyłu to: ");
  for (int i = strlen(singleWord) - 1; i >= 0; i--)
    printf("%c", singleWord[i]);
}