// 실수형 데이터의 올바른 출력과 잘못된 출력 비교하기

#include <stdio.h>

void main()
{
  float value = 2.1f;
  /* value 변수 값을 실수 형식과 정수 형식으로 출력 함*/
  printf("%f, %d", value, value);
}