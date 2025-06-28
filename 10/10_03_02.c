// 변수의 특정 Bit를 1로 만드는 예제

#include <stdio.h>

unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
{
  if (bit_num < 8)
    dest_data |= (0x01 << bit_num);

  return dest_data;
}

void main()
{
  unsigned char lamp_state = 0x77; // 0x77 → 0111 0111
  printf("%X -> ", lamp_state);

  lamp_state = SetBit(lamp_state, 3); // 0x7F → 0111 1111
  printf("%X\n", lamp_state);
}