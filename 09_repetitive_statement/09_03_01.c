// for 반복문을 사용하여 구구단 2단 출력하기

#include <stdio.h>

void main()
{
  int step = 2;

  for (int i = 1; i <= 9; i++)
  {
    printf("%d * %d = %d\n", step, i, step * i);
  }
}