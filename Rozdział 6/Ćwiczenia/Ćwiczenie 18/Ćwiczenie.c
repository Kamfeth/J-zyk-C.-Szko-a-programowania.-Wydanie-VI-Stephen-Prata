#include <stdio.h>

int main(void)
{
  int numberOfFriendsOnSocialMedia = 8, numberOfElapsedWeeks = 2;
  while (numberOfFriendsOnSocialMedia <= 150)
  {
    printf("Profesor po tygodniu #%d posiada %d znajomych na portalu\n", numberOfElapsedWeeks - 1, numberOfFriendsOnSocialMedia);
    numberOfFriendsOnSocialMedia += -numberOfElapsedWeeks + numberOfFriendsOnSocialMedia - numberOfElapsedWeeks;
    numberOfElapsedWeeks++;
  }
}