#include <stdio.h>

struct daneos
{
  char imie[21];
  char nazwisko[41];
};

struct student
{
  struct daneos daneOsoby;
  double oceny[10];
  double sredniaArytmetycznaOcen;
};

void pobierzOcenyDlaWszystkichStudentow(const int liczbaStudentow, struct student studenci[liczbaStudentow])
{
  for (int i = 0; i < liczbaStudentow; i++)
  {
    printf("Student: %s %s\n", studenci[i].daneOsoby.imie, studenci[i].daneOsoby.nazwisko);
    printf("Wprowadź ocenę studenta (tylko do 10 ocen, wpisanie litery 'q' kończy wprowadzanie danych): ");
    for (int j = 0; j < 10 && scanf("%lf", &studenci[i].oceny[j]); j++)
    {
      if (j < 9)
        printf("Wprowadź kolejną ocenę studenta (tylko do 10 ocen, wpisanie litery 'q' kończy wprowadzanie danych): ");
    }
    printf("\nZakończono wprowadzanie ocen studenta %s %s\n", studenci[i].daneOsoby.imie, studenci[i].daneOsoby.nazwisko);
    while (getchar() != '\n');
  }
}

void wyliczSredniaArytmetycznaOcenDlaKazdegoStudentow(const int liczbaStudentow, struct student studenci[liczbaStudentow])
{
  for (int i = 0; i < liczbaStudentow; i++)
  {
    double sumaOcenStudenta = 0.0;
    int liczbaWprowadzonychOcen = 0;
    for (int j = 0; j < 10 && studenci[i].oceny[j] > 0.0; j++)
    {
      sumaOcenStudenta += studenci[i].oceny[j];
      liczbaWprowadzonychOcen++;
    }
    studenci[i].sredniaArytmetycznaOcen = liczbaWprowadzonychOcen > 0 ? sumaOcenStudenta / liczbaWprowadzonychOcen : 0.0;
  }
}

void pokazInformacjeNaTematWszystkichStudentow(const int liczbaStudentow, const struct student studenci[liczbaStudentow])
{
  for (int i = 0; i < liczbaStudentow; i++)
  {
    printf("\nDane studenta #%d:\n\n", i + 1);
    printf("Imię i nazwisko: %s %s\n", studenci[i].daneOsoby.imie, studenci[i].daneOsoby.nazwisko);
    for (int j = 0; j < 10 && studenci[i].oceny[j] > 0.0; j++)
      printf("Ocena #%d studenta: %.1lf\n", j + 1, studenci[i].oceny[j]);
    printf("Średnia arytmetyczna wszystkich ocen studenta: %.1lf\n", studenci[i].sredniaArytmetycznaOcen);
  }
}

void pokazSumarycznaSredniaArytmetycznaStudentow(const int liczbaStudentow, const struct student studenci[liczbaStudentow])
{
  double sumarycznaSredniaArytmetycznaStudentow = 0.0;
  for (int i = 0; i < liczbaStudentow; i++)
    sumarycznaSredniaArytmetycznaStudentow += studenci[i].sredniaArytmetycznaOcen;
  printf("\nSumaryczna średnia arytmetyczna studentów wynosi: %.1lf", sumarycznaSredniaArytmetycznaStudentow / liczbaStudentow);
}

int main(void)
{
  const int ROZMIAR = 4;
  struct student studenci[] =
  {
    {"Daniel", "Olszewski"},
    {"Alicja", "Kubska"},
    {"Stanisław", "Kowalski"},
    {"Bartłomiej", "Majka"}
  };
  pobierzOcenyDlaWszystkichStudentow(ROZMIAR, studenci);
  wyliczSredniaArytmetycznaOcenDlaKazdegoStudentow(ROZMIAR, studenci);
  pokazInformacjeNaTematWszystkichStudentow(ROZMIAR, studenci);
  pokazSumarycznaSredniaArytmetycznaStudentow(ROZMIAR, studenci);
}