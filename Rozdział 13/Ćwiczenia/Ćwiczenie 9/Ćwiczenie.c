/* dodajsl.c -- korzysta z fprintf(), fscanf() i rewind() */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(void)
{
     FILE *wp;
     char slowa[MAX];
     if ((wp = fopen("slowka", "a+")) == NULL)
     {
          fprintf(stdin, "Nie moge otworzyc pliku \"slowka\".\n");
          exit(EXIT_FAILURE);
     }
     int liczbaSlowZapisanychWPliku = 1;
     while (fgets(slowa, MAX, wp))
       liczbaSlowZapisanychWPliku++;
     puts("Dodaj slowa, ktore maja zostac dodane do pliku;");
     puts("Aby zakonczyc, wpisz #.");
     while ((fscanf(stdin,"%40s", slowa) == 1) && (slowa[0] != '#'))
          fprintf(wp, "%d) %s\n", liczbaSlowZapisanychWPliku++, slowa);
     puts("Zawartosc pliku:");
     rewind(wp);           // przejdz do poczatku pliku
     while (fgets(slowa, MAX, wp))
          fputs(slowa, stdout);
     puts("Gotowe!\n");
     if (fclose(wp) != 0)
          fprintf(stderr,"Blad przy zamykaniu pliku.\n");
     return 0;
}