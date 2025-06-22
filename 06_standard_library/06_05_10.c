// 왼쪽 또는 오른쪽으로 정렬해서 출력하기

#include <stdio.h>

void main()
{
  int data = 7;
  /* 자릿수 확인을 위해 [ ] 문자를 사용함 */
  printf("[%5d] [%05d] [%-5d]", data, data, data);
}