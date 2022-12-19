#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Oto przekazane argumenty wiersza poleceń w odwrotnej kolejności: ");
  for (int i = argc - 1; i > 0; i--)
    printf("%s ", argv[i]);
  putchar('\n');
}