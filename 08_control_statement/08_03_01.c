// 조건 수식에 따른 if ~ else ~의 단일 명령 문장 실행하기

#include <stdio.h>

void main()
{
  int data = 5; /* 명령문1 */
  /* data > 3 비교 연산은 참이기 때문에 명령문을 수행합니다. */
  if (data > 3)
    printf("data는 3보다 큰 수입니다. \n"); /* 명령문2 */
  else
    printf("data는 3보다 작거나 같은 수입니다. \n"); /* 명령문3 */
  printf("작업 종료 \n");                            /* 명령문4 */
}