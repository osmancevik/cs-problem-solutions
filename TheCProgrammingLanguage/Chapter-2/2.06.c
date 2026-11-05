/* Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n
bits that begin at position p set to the rightmost n bits of y, leaving the
other bits unchanged.*/

#include <stdio.h>

int main() {
  int n = 5;
  int p = 8;
  unsigned int y = 0B101101101101;
  unsigned int x = 0B111101000110;

  unsigned int xpn = (x >> (p + 1 - n)) & ~(~0 << n);
  printf("%b\n", xpn);

  unsigned int yn = (y & (~0U << n)) | xpn;
  printf("%b\n", yn);
}
