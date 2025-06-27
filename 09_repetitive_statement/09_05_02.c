// break문을 사용해서 반복문 모두 빠져나오기

#include <stdio.h>

void main()
{
  int i;
  int j;

  for (i = 5; i < 7; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (i == 5 && j == 1)
        break;
      printf("i(%d) - j(%d)\n", i, j);
    }

    if (i == 5 && j == 1)
      break;
  }
}