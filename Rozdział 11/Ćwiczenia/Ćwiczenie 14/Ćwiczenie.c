#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("%s ^ %s = %.2lf\n", argv[1], argv[2], pow(strtod(argv[1], NULL), strtol(argv[2], NULL, 10)));
}