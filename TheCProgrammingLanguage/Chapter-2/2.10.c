/* Exercise 2-10. Rewrite the function lower, which converts upper case letters
to lower case, with a conditional expression instead of if-else. */

#include <stdio.h>

int main() {
  char w[] = "OsMaN";
  for (int i = 0; w[i] != '\0'; i++) {
    w[i] = (w[i] <= 'Z') ? w[i] + 32 : w[i];
  }
  puts(w);
}
