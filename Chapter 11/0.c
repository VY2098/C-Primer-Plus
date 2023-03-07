#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ANSWER "GRANT"
#define SIZE 40

char* s_gets(char* st, int n);
int Strlen(const char* st);
char* S_gets(char* st, int n);
char* space(char* st);
void upper(char* st);

int main(void)
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	upper(try);
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
		upper(try);
	}
	puts("That's right!");

	return 0;
}

char* s_gets(char* st, int n)
{
	char* ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

int Strlen(const char* st)
{
	int count = 0;
	while (*st++)
		count++;

	return count;
}

char* S_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

char* space(char* st)
{
	while (*st != ' ' && *st != '\0')
		st++;
	if (*st == '\0')
		return NULL;
	else
		return st;
}

void upper(char* st)
{
	while (*st != '\0')
	{
		*st = toupper(*st);
		st++;
	}
}