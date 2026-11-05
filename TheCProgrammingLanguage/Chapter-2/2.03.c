#include <stdio.h>
int main() {
  char s[] = {'0', 'x', 'A', 'F', '3', 'A', '4'};

  int n = 0;
  int i = 0;

  if (s[i] == '0' && s[i] == 'x') {
    n = 0x0;
  }

  for (int i = 2; s[i] >= '0' && s[i] <= 'F'; i++) {
    if (s[i] <= '9') {
      n = 16 * n + (s[i] - '0');
    } else if (s[i] >= 'A') {
      n = 16 * n + (s[i] - 'A' + 10);
    }
  }

  printf("%#x\n", n);

  return n;
}
