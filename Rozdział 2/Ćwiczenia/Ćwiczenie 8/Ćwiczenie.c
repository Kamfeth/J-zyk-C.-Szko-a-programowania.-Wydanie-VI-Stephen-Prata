#include <stdio.h>

void dwa(void)
{
  printf("dwa\n");
}

void raz_trzy(void)
{
  printf("raz\n");
  dwa();
  printf("trzy\n");
}

int main(void)
{
  printf("zaczynamy:\n");
  raz_trzy();
  printf("koniec!");
}