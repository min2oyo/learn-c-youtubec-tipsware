#include <stdio.h>

int result;

void test()
{
  int result = 5;

  result++;
}

void main()
{
  test();

  printf("result = %d\n", result);
}