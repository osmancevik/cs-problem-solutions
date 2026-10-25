// Exercise 1-14. Write a program to print a histogram of the frequencies of
// different characters in its input.

#include <stdio.h>

#define MAX_CHAR 128

int main() {
  int c, i, j;
  int frequencie[MAX_CHAR] = {0};

  while ((c = getchar()) != EOF) {
    if (c < MAX_CHAR) {
      frequencie[c]++;
    }
  }

  for (i = 0; i < MAX_CHAR; ++i) {
    if (frequencie[i] > 0) {
      if (i == '\n')
        printf("\\n : ");
      else if (i == '\t')
        printf("\\t : ");
      else
        printf("%c  : ", i);

      for (j = 0; j < frequencie[i]; ++j) {
        putchar('#');
      }
      putchar('\n');
    }
  }
  return 0;
}
