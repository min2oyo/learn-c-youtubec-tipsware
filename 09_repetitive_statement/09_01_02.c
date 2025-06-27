// 무한 루프 형식의 for 반복문을 사용해 1부터 5까지 더하기

#include <stdio.h>

void main()
{
  int num = 1;
  int sum = 0;

  for (;;)
  {
    printf("num(%d) + sum(%d) = ", num, sum);
    sum += num;
    printf("%d\n", sum);
    num++;
    if (num > 5)
      break;
  }

  printf("\nResult : num = %d  sum = %d\n", num, sum);
}