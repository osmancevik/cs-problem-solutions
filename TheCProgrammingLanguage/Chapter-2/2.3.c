int main() {
  char s[] = {0, 'x', 'a', 'F', 3, 'a', 4};
  int i;
  int n;

  for (i = 0; s[i])

    n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}
