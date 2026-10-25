// Exercise 3-13. Write a program to print a histogram of the lengths of words
// in its input. It is easy to draw the histogram with the bars horizontal; a
// vertical orientation is more challenging.

#include <stdio.h>

int main() {
  int wordLengthHolder[10];
  int wordLength = 0;
  char input;

  int i = 0;
  while ((input = getchar()) != EOF) {
    if (input == ' ' || input == '\n' || input == '\t') {
      wordLengthHolder[i] = wordLength;
      wordLength = 0;
      i++;
    } else {
      wordLength++;
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < wordLengthHolder[i]; j++) {
      putchar('#');
    }
    putchar('\n');
  }
}
