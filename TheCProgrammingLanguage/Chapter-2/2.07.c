/* Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits
that begin at position p inverted (i.e., 1 changed into 0 and vice versa),
leaving the others unchanged. */

unsigned int invert(unsigned int x, int p, int n) {
  unsigned int mask = ~(~0U << n) << (p + 1 - n);
  return x ^ mask;
}
