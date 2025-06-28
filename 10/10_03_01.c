// 변수의 특정 Bit를 0으로 만드는 예제

#include <stdio.h>

unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
{
  if (bit_num < 8)
    dest_data &= ~(0x01 << bit_num);

  return dest_data;
}

void main()
{
  unsigned char lamp_state = 0x7F; // 0x7F → 0111 1111
  printf("%X -> ", lamp_state);

  lamp_state = ResetBit(lamp_state, 3); // 0x77 → 0111 0111
  printf("%x\n", lamp_state);
}