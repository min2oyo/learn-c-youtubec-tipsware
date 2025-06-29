// 전역 변수와 지역 변수의 이름이 가틀 때 문제점 살펴보기

#include <stdio.h>

int result;

void Sum(int data1, int data2)
{
  int result;

  result = data1 + data2;
}

void main()
{
  Sum(5, 3);

  printf("5 + 3 = %d\n", result);
}