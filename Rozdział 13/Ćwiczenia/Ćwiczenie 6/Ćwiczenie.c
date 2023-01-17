/* reduktor.c -- zmniejsza rozmiar Twoich plikow o dwie trzecie ! */
#include <stdio.h>
#include <stdlib.h>      // dla exit()
#include <string.h>

#define DL 40
int main(void)
{
    FILE  *we, *wy;     // deklaracja 2 wskaznikow plikowych
    int ch;
    char nazwaPlikuWejsciowego[DL], nazwa[DL];
    int licznik = 0;
    // plik wejsciowy
    printf("Wprowadź nazwę pliku tekstowego, który ma zostać otworzony przez program: ");
    fgets(nazwaPlikuWejsciowego, DL, stdin);
    nazwaPlikuWejsciowego[strlen(nazwaPlikuWejsciowego) - 1] = '\0';
    if ((we = fopen(nazwaPlikuWejsciowego, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", nazwaPlikuWejsciowego);
        exit(EXIT_FAILURE);
    }

    // przygotowania pliku wynikowego
    strncpy(nazwa, nazwaPlikuWejsciowego, DL-5); // kopiuje nazwe pliku do tablicy
    nazwa[DL - 5] = '\0';
    strcat(nazwa,".red");    // dodaje .red do nazwy

    if ((wy = fopen(nazwa, "w")) == NULL)
    {                        // otwiera plik do zapisu
        fprintf(stderr,"Nie mozna utworzyc pliku wyjsciowego.\n");
        exit(EXIT_FAILURE);
    }
    // kopiowanie danych
    while ((ch = getc(we)) != EOF)
        if (licznik++ % 3 == 0)
            putc(ch, wy);    // wyswietla co trzeci znak
    // sprzatanie
    if (fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr,"Blad przy zamykaniu plikow.\n");
    return 0;
}