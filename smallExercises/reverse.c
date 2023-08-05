#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end)
{
        if (start >= end) {
                return;
        }
        char c = *start;
        *start = *end;
        *end = c;
        reverse(++start, --end);
}

int main()
{
        char s[] = "Hello, World!";
        printf("String before being reversed: %s\n", s);
        reverse(s, s + strlen(s) - 1);
        printf("String after being reversed: %s\n", s);
        return 0;
}