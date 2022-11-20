#include <stdio.h>

void do_podst_n(const int n, const int typSystemuLiczbowego)   /* funkcja rekurencyjna */
{
  if (n >= typSystemuLiczbowego)
    do_podst_n(n / typSystemuLiczbowego, typSystemuLiczbowego);
  putchar(n % typSystemuLiczbowego + '0');
}

int main(void)
{
  printf("Liczba 1994 w przełożeniu na system piątkowy wynosi: ");
  do_podst_n(1994, 5);
}