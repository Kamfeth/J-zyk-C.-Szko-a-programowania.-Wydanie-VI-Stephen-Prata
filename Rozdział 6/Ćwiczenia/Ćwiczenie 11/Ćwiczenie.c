#include <stdio.h>

int main(void)
{
  int nums[8];
  printf("Wprowadź osiem liczb całkowitych: ");
  scanf("%d%d%d%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7]);
  printf("Oto wprowadzone liczby całkowite, ale w odwrotnej kolejności: ");
  for (int i = 7; i >= 0; i--)
    printf("%d ", nums[i]);
}