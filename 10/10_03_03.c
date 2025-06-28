// 변수의 값을 2진수 형태로 확인하는 예제

#include <stdio.h>

void print_binary(unsigned char lamp_state)
{
  printf("%X -> ", lamp_state);

  for (unsigned char i = 7; i < 8; i--)
  {
    printf("%d", (lamp_state >> i) & 1);
    printf("%s", i == 4 ? "\u00A0" : "");
  }

  printf("\n");
}

void main(void)
{
  unsigned char lamp_state = 0x75;

  print_binary(lamp_state);
}
