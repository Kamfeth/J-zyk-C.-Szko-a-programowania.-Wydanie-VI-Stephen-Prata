#include <stdio.h>
#include <string.h>

char* zawiera_lan(const char *lancuch, const char *podlancuch)
{
  return strstr(lancuch, podlancuch);
}

int main(void)
{
  printf("Podłańcuch 'ul' w nazwie 'pula' rozpoczyna się na indeksie %d", zawiera_lan("pula", "ul") - "pula");
}