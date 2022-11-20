#include <stdio.h>

void rzad_zn(const char ch, const int i, const int j)
{
  for (int index = 1; index <= j; index++)
    index >= i ? putchar(ch) : putchar(' ');
}

int main(void)
{
  rzad_zn('*', 5, 16);
}