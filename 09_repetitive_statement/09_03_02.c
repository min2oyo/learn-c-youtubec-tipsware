// for 반복문과 함수를 사용항 구구단 2단 출력하기

#include <stdio.h>

void ShowMultiplication()
{
  int step = 2;

  for (int i = 1; i <= 9; i++)
  {
    printf("%d * %d = %d\n", step, i, step * i);
  }
}

void main()
{
  ShowMultiplication();
}