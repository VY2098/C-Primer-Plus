#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 100
void s_get(char* st, int n);
int main(void)
{
	char st[SIZE];
	int c_w, c_u, c_l, c_p, c_d;
	int i, n;

	puts("Enter a string, EOF to quit:");
	s_get(st, SIZE);
	n = strlen(st);

	c_w = 0;
	for (i = 0; i < n; i++)
	{
		if (!isspace(st[i]) && isspace(st[i + 1]))
			c_w++;
	}

	c_u = 0;
	for (i = 0; i < n; i++)
	{
		if (isupper(st[i]))
			c_u++;
	}

	c_l = 0;
	for (i = 0; i < n; i++)
	{
		if (islower(st[i]))
			c_l++;
	}

	c_p = 0;
	for (i = 0; i < n; i++)
	{
		if (ispunct(st[i]))
			c_p++;
	}

	c_d = 0;
	for (i = 0; i < n; i++)
	{
		if (isdigit(st[i]))
			c_d++;
	}

	printf("%d %s in the string.\n", c_w, (c_w == 0 || c_w == 1) ? "word" : "words");
	printf("%d upper %s in the string.\n", c_u, (c_u == 0 || c_u == 1) ? "letter" : "letters");
	printf("%d lower %s in the string.\n", c_l, (c_l == 0 || c_l == 1) ? "letter" : "letters");
	printf("%d punctuation %s in the string.\n", c_p, (c_p == 0 || c_p == 1) ? "character" : "characters");
	printf("%d %s in the string.\n", c_d, (c_d == 0 || c_d == 1) ? "digit" : "digits");

	system("pause");
	return 0;
}

void s_get(char* st, int n)
{
	int i = 0;
	while ((st[i] = getchar()) != EOF && i++ < n)
		continue;
	st[i] = '\0';
}