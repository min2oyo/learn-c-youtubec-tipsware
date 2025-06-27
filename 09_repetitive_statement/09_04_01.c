// for 반복문을 사용한 중첩 반복문 예제

#include <stdio.h>

void main()
{
  for (int i = 5; i < 7; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("i(%d) - j(%d)\n", i, j);
    }
  }
}