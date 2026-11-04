/* Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes
each character in s1 that matches any character in the string s2. */

#include <stdio.h>

void squeeze(char s1[], char s2[]) {
  int i, j, k;
  int match;

  k = 0;
  for (i = 0; s1[i] != '\0'; i++) {
    match = 0;
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        match = 1;
        break;
      }
    }
    if (!match) {
      s1[k++] = s1[i];
    }
  }
  s1[k] = '\0';
}

int main(void) {
  char s1[] = "oaco1";
  char s2[] = "o1";

  squeeze(s1, s2);

  for (int i = 0; s1[i] != '\0'; i++) {
    printf("%c\n", s1[i]);
  }

  return 0;
}
