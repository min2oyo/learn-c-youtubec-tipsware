// do ~ while 반복문을 사용하여 1부터 5까지 더하기

#include <stdio.h>

void main()
{
  int num = 1;
  int sum = 0;

  do
  {
    printf("num(%d) + sum(%d) = ", num, sum);
    sum += num;
    printf("%d\n", sum);
    num++;
  } while (num <= 5);

  printf("\nResult : num = %d  sum = %d\n", num, sum);
}