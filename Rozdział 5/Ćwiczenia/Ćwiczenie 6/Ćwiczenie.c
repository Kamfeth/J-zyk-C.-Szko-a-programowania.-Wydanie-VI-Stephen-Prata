/* dodaj.c -- piec typow instrukcji */
#include <stdio.h>
int main(void)          /* oblicza sume kwadratow pierwszych n liczb calkowitych */
{
  int licznik, suma, liczba;          /* instrukcja deklaracji         */

  licznik = 0;                        /* instrukcja przypisania        */
  suma = 0;                           /* jak wyzej                     */
  printf("Wprowadź zakres do policzenia sumy kwadratów liczb z przedziału od 1 do n: ");
  scanf("%d", &liczba);
  while (licznik++ < liczba)          /* instrukcja                    */
     suma = suma + licznik * licznik; /* while                         */
  printf("suma = %d\n", suma);        /* instrukcja wywolania funkcji  */
  return 0;                           /* instrukcja zwrotu */
}