/* licz.c -- korzystanie ze standardowego we-wy */
#include <stdio.h>
#include <stdlib.h> // prototyp funkcji exit()
#include <string.h>
int main(void)
{
    int ch;         // przechowuje kolejne odczytywane znaki
    FILE *wp;       // "wskaznik plikowy"
    unsigned long licznik = 0;
    char nazwaPliku[31];
    printf("Wprowadź nazwę pliku tekstowego (maksymalnie do 30 znaków): ");
    fgets(nazwaPliku, 31, stdin);
    nazwaPliku[strlen(nazwaPliku) - 1] = '\0';
    if ((wp = fopen(nazwaPliku, "r")) == NULL)
    {
        printf("Nie mozna otworzyc %s\n", nazwaPliku);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(wp)) != EOF)
    {
       putc(ch,stdout);
       licznik++;
    }
    fclose(wp);
    printf("Plik %s zawiera %lu znakow\n", nazwaPliku, licznik);
    return 0;
}