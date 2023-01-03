// pe12-8.c
#include <stdio.h>
#include <stdlib.h>
int * stworz_tablice (int elem, int wart);
void pokaz_tablice (const int tab[], int n);
int main (void)
{
int * wt;
int rozmiar;
int wartosc;
printf("Podaj liczbe elementow: ");
while (scanf("%d", &rozmiar) == 1 && rozmiar > 0)
{
      printf("Podaj wartosc poczatkowa: ");
      scanf("%d", &wartosc);
      wt = stworz_tablice(rozmiar, wartosc);
      if (wt)
      {
            pokaz_tablice(wt, rozmiar);
            free(wt);
      }
      printf("Podaj liczbe elementow (<1 - koniec): ");
}
printf("Koniec.\n");
return 0;
}
int * stworz_tablice (int elem, int wart)
{
  int *tablica = malloc(elem * sizeof(int));
  for (int i = 0; i < elem; i++)
    tablica[i] = wart;
  return tablica;
}
void pokaz_tablice (const int tab[], int n)
{
  printf("Oto zawartość tablicy liczb całkowitych, po 8 liczb na wiersz:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", tab[i]);
    if ((i + 1) % 8 == 0)
      putchar('\n');
  }
  putchar('\n');
}