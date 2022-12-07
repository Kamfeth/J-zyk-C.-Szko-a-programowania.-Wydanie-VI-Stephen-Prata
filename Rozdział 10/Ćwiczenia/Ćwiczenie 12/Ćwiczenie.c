#include <stdio.h>

#define MIESIACE 12    /* liczba miesiecy w roku */
#define LATA   5       /* liczba lat danych      */

void wypiszOpadyZaPoszczegolnyRok(const int rok, const float opadyWCalach)
{
  printf("%5d %12.1f\n", rok, opadyWCalach);
}

float obliczRocznaSredniaOpadow(const float daneDotyczaceOpadow[LATA][MIESIACE])
{
  float suma = 0.0F;
  for (int rok = 0; rok < LATA; rok++)
  {
    float podsuma = 0.0F;
    for (int miesiac = 0; miesiac < MIESIACE; miesiac++)
      podsuma += daneDotyczaceOpadow[rok][miesiac];
    wypiszOpadyZaPoszczegolnyRok(2010 + rok, podsuma);
    suma += podsuma;
  }
  return suma / LATA;
}

float obliczSrednieOpadyDlaWybranegoMiesiaca(const float daneDotyczaceOpadow[LATA][MIESIACE], const int numerMiesiaca)
{
  float podsuma = 0.0F;
  for (int rok = 0; rok < LATA; rok++)
    podsuma += daneDotyczaceOpadow[rok][numerMiesiaca];
  return podsuma / LATA;
}

int main(void)
{
  /* inicjalizacja danych o opadach z lat 2010 - 2014 */
  const float deszcz[LATA][MIESIACE] =
          {
                  {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
                  {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
                  {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
                  {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
                  {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
          };
  printf(" ROK       OPADY (w calach)\n");
  printf("\nRoczna srednia wynosi %.1f cale\n\n", obliczRocznaSredniaOpadow(deszcz));
  printf("SREDNIE MIESIECZNE:\n\n");
  printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz  Lis  Gru\n");
  for (int miesiac = 0; miesiac < MIESIACE; miesiac++)
    printf("%4.1f ", obliczSrednieOpadyDlaWybranegoMiesiaca(deszcz, miesiac));
  printf("\n");
  return 0;
}