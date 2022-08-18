#include <stdio.h>

int main(void)
{
  const double ONE_GALLON_IN_LITERS = 3.785;
  const double ONE_MILE_IN_KILOMETERS = 1.609;
  double numberOfTraveledMiles, numberOfUsedGallons;
  printf("Podaj liczbę przebytych mil: ");
  scanf("%lf", &numberOfTraveledMiles);
  printf("Podaj liczbę zużytych galonów paliwa: ");
  scanf("%lf", &numberOfUsedGallons);
  const double milesPerGalon = numberOfTraveledMiles / numberOfUsedGallons;
  printf("Amerykański poziom zużycia wynosi %.1lf mpg\n", milesPerGalon);
  printf("Europejski poziom zużycia wynosi %.1lf/100 km", 100 / (milesPerGalon / ONE_GALLON_IN_LITERS * ONE_MILE_IN_KILOMETERS));
}