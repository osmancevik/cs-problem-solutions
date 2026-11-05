/* Exercise 2-5. Write the function any(s1,s2), which returns the first location
in a string s1 where any character from the string s2 occurs, or -1 if s1
contains no characters from s2. */

#include <stdio.h>

void any(char s1[], char s2[]) {

  char s3[10];
  int k = 0;
  int q = 0;

  for (int i = 0; s1[i] != '\0'; i++) {
    for (int j = q; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        s3[k] = s1[i];
        s3[k + 1] = i + '0';
        k = k + 2;
        q++;
      }
    }
  }

  if (k != 0) {
    for (int i = 0; i < k; i = i + 2) {
      printf("%c", s3[i]);
      printf(":");
      printf("%c\n", s3[i + 1]);
    }
  } else {
    printf("-1");
  }
}
int main() {
  char s1[] = "osmaoa";
  char s2[] = "oa";

  any(s1, s2);
}
