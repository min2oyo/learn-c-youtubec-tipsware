// for 반복문을 사용하여 1부터 5까지 더하기

#include <stdio.h>

void main()
{
  int num;
  int sum = 0;

  for (num = 1; num <= 5; num++)
  {
    printf("num(%d) + sum(%d) = ", num, sum);
    sum += num;
    printf("%d\n", sum);
  }

  printf("\nResult : num = %d  sum = %d\n", num, sum);
}