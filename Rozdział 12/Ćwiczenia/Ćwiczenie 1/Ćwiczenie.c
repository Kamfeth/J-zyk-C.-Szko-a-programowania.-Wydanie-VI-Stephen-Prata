#include <stdio.h>
void krytyka(int *jednostki);
int main(void)
{
    int jednostki;
    printf("Ile funtow masla miesci sie w barylce?\n");
    scanf("%d", &jednostki);
    while ( jednostki != 56)
        krytyka(&jednostki);
    printf("Musiales podejrzec!\n");

    return 0;
}
void krytyka(int *jednostki)
{
    printf("Nie masz szczescia, sprobuj ponownie.\n");
    scanf("%d", jednostki);
}