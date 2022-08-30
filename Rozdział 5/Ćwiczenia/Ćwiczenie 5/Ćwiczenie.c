/* dodaj.c -- piec typow instrukcji */
#include <stdio.h>
int main(void)          /* oblicza sume pierwszych n liczb calkowitych */
{
  int licznik, suma, liczba;    /* instrukcja deklaracji         */

  licznik = 0;                  /* instrukcja przypisania        */
  suma = 0;                     /* jak wyzej                     */
  printf("Wprowadź zakres do policzenia sumy liczb z przedziału od 1 do n: ");
  scanf("%d", &liczba);
  while (licznik++ < liczba)    /* instrukcja                    */
     suma = suma + licznik;     /* while                         */
  printf("suma = %d\n", suma);  /* instrukcja wywolania funkcji  */
  return 0;                     /* instrukcja zwrotu */
}