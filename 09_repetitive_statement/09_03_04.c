// for 반복문과 함수를 사용하여 구구단 전체 출력하기

#include <stdio.h>

void ShowMultiplication(int step)
{
  for (int i = 1; i <= 9; i++)
  {
    printf("%d * %d = %d\n", step, i, step * i);
  }
}

void main()
{
  for (int i = 2; i <= 9; i++)
  {
    ShowMultiplication(i);
  }
}