#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
	get_first();

	system("pause");
	return 0;
}

char get_first(void)
{
	int ch;

	while (isspace(ch = getchar()))
		continue;

	while (getchar() != '\n')
		continue;
	
	putchar(ch);
	printf("\n");

	return ch;
}