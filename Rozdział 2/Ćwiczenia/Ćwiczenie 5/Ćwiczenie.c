#include <stdio.h>

void br(void)
{
  printf("Brazylia, Rosja");
}

void ic(void)
{
  printf("Indie, Chiny\n");
}

int main(void)
{
  br();
  printf(", ");
  ic();
  ic();
  br();
}