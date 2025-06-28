// 변수의 특정 Bit를 0 또는 1로 변경하는 예제

#include <stdio.h>

unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value)
{
  if (bit_num < 8 && (value == 0 || value == 1))
  {
    unsigned char mask = 0x01 << bit_num;

    if (value)
      dest_data |= mask;
    else
      dest_data &= ~mask;
  }

  return dest_data;
}

void main()
{
  unsigned char lamp_state = 0x7F; // 0x7F → 0111 1111
  printf("%X -> ", lamp_state);

  lamp_state = ModifyBit(lamp_state, 3, 0); // 0x77 → 0111 0111
  printf("%X -> ", lamp_state);

  lamp_state = ModifyBit(lamp_state, 3, 1); // 0x7F → 0111 1111
  printf("%X\n", lamp_state);
}