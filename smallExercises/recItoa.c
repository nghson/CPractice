#include <stdio.h>
#include <string.h>
#define MAXLENGTH 50 /* max length of input int */

void assertStringEqual(const char* str1, const char* str2)
{
	if (strcmp(str1, str2)) {
		printf("Strings are not equal: %s and %s\n", str1, str2);	
	}
	printf("Strings are equal\n");	
}

int inner(int n, char* s)
{
	if (n > 10) {
		int k = inner(n / 10, s) + 1;
		*(s + k) = n % 10 + '0';
		return k;
	}
	*s = n % 10 + '0';
	return 0;
}

void recurItoa(int n, char s[])
{
	char *p = s;
	if (n < 0) {
		*(p++) = '-';
		n = -n;
	}
	int k = inner(n, p);
	*(p + k + 1) = '\0';
}

int main()
{
	int n = -123456789;
	int m = 123456789;
	char s[MAXLENGTH];
	char t[MAXLENGTH];
	recurItoa(n, s);
	assertStringEqual(s, "-123456789");
	recurItoa(m, t);
	assertStringEqual(t, "123456789");

	return 0;
}
