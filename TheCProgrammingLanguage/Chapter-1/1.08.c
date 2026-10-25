// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
    int c, nl, tab, blank;

    nl = tab = blank = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++blank;
    printf("new line: %d\n", nl);
    printf("tab: %d\n", tab);
    printf("blank: %d\n", blank);
}