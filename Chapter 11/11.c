#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 80
#define LINE 10

char* s_gets(char* st, int n);
void showm(void);
void o_puts(char st[][SIZE], int n);
void a_puts(char** st, int n);
void l_puts(char** st, int n);
void w_puts(char** st, int n);
int word(char* st);
int main(void)
{
	puts("Enter 10 strings, EOF to quit:");
	char ch[LINE][SIZE];
	char* st[LINE];
	int i = 0;
	while (s_gets(ch[i++], SIZE) != NULL && i < LINE)
		st[i - 1] = ch[i - 1];

	int choice;
	showm();
	scanf("%d", &choice);
	while (getchar() != '\n')
		continue;

	while (choice != 5)
	{
		switch (choice)
		{
		case 1: 
			puts("Here is the result:");
			o_puts(ch, i);
			break;
		case 2: 
			puts("Here is the result:");
			a_puts(st, i);
			break;
		case 3:
			puts("Here is the result:");
			l_puts(st, i);
			break;
		case 4:
			puts("Here is the result:");
			w_puts(st, i);
			break;
		}
		printf("\n");
		showm();
		scanf("%d", &choice);
		while (getchar() != '\n')
			continue;

	}
	puts("Done.");
	
	system("pause");
	return 0;
}

char* s_gets(char* st, int n)
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
		{
			while (getchar() != '\n')
				continue;
		}
	}
	return ret_val;
}

void showm(void)
{
	int i;
	for (i = 0; i < 40; i++)
		fputs("*", stdout);
	printf("\n");
	puts("select your choice:");
	puts("1. print the original list of strings");
	puts("2. print the strings in ASCII collating sequence");
	puts("3. print the strings in order of increasing length");
	puts("4. print the strings in order of the lengrh of the first word in the string");
	puts("5. quit");
	for (i = 0; i < 40; i++)
		fputs("*", stdout);
	printf("\n");
}

void o_puts(char st[][SIZE], int n)
{
	int i;
	for (i = 0; i < n - 1; i++)
		puts(st[i]);
}

void a_puts(char** st, int n)
{
	int i, j;
	char* temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			if (strcmp(st[i], st[j]) > 0)
			{
				temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
		puts(st[i]);
}

void l_puts(char** st, int n)
{
	int i, j;
	char* temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			if (strlen(st[i]) > strlen(st[j]))
			{
				temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
		puts(st[i]);

}

void w_puts(char** st, int n)
{
	int i, j;
	char* temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			if (word(st[i]) > word(st[j]))
			{
				temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
		puts(st[i]);
}

int word(char* st)
{
	int i = 0;
	while (isspace(st[i]))
		continue;
	while (!isspace(st[++i]))
		continue;

	return i;
}