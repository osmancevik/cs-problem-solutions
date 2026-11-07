/* Exercise 3-2. Write a function escape(s,t) that converts characters like
newline and tab into visible escape sequences like \n and \t as it copies the
string t to s. Use a switch. Write a function for the other direction as well,
converting escape sequences into the real characters. */

#include <stdio.h>

void main() {

  char t[] = "osm\na\tn";
  char s[10];
  int j = 0;
  for (int i = 0; t[i] != '\0'; i++) {
    switch (t[i]) {
    case '\n':
      s[j++] = '\\';
      s[j++] = 'n';
      break;
    case '\t':
      s[j++] = '\\';
      s[j++] = 't';
      break;
    default:
      s[j++] = t[i];
    }
  }
  s[j] = '\0';
  puts(s);
}
