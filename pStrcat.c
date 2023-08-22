#include <stdio.h>

void p_strcat(char *s, char *t)
{
	for (; *s != '\0'; ++s) {
		;
	}
	for (; (*(s++) = *(t++)) != '\0';) {
		;
	}
}

int main()
{
	char s[100] = "Hello, ";
	char t[] = "World!";
	p_strcat(s, t);

	printf("The concatenated string: %s\n", s);
	return 0;
}
