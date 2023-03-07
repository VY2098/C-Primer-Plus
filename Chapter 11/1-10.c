#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 10

char* S_Gets(char* st, int n);
void s_gets(char* st, int n);
void S_gets(char* st, int n);
void word(char* st);
void words(char* st, int n);
char* Strchr(const char* st, char ch);
int is_within(char ch, const char* st);
char* mystrncpy(char* s1, const char* s2, int n);
char* string_in(const char* s1, const char* s2);
void reverse(char* st);
void nospace(char* st);

int main(void)
{
	char arr1[SIZE + 1];
	puts("ONE");
	printf("Enter %d characters:\n", SIZE);
	s_gets(arr1, SIZE);
	puts("Result:");
	puts(arr1);
	puts("Done.\n");

	char arr2[SIZE + 1];
	puts("TWO");
	printf("Enter %d characters, space to quit:\n", SIZE);
	S_gets(arr2, SIZE);
	puts("Result:");
	puts(arr2);
	puts("Done.\n");

	char arr3[80];
	puts("THREE");
	puts("Enter a line");
	word(arr3);
	puts("Result:");
	puts(arr3);
	puts("Done.\n");

	char arr4[80];
	puts("FOUR");
	puts("Enter a line");
	words(arr4, SIZE);
	puts("Result:");
	puts(arr4);
	puts("Done.\n");

	char arr5[80];
	char ch1;
	puts("FIVE");
	puts("Enter a string (EOF to quit):");
	while (S_Gets(arr5, 80) != NULL)
	{
		puts("Enter a character:");
		ch1 = getchar();
		while (getchar() != '\n')
			continue;
		puts("Your string:");
		puts(arr5);
		if (Strchr(arr5, ch1) == NULL)
			printf("%c does not exit in this string.\n", ch1);
		else
			printf("%c exits in this string.\n", ch1);

		puts("Enter a string again (EOF to quit):");
	}
	puts("Done.\n");

	char arr6[80];
	char ch2;
	puts("SIX");
	puts("Enter a string (EOF to quit):");
	while (S_Gets(arr6, 80) != NULL)
	{
		puts("Enter a character:");
		ch2 = getchar();
		while (getchar() != '\n')
			continue;
		puts("Your string:");
		puts(arr6);
		if (is_within(ch2, arr6))
			printf("%c exits in this string.\n", ch2);
		else
			printf("%c does not exit in this string.\n", ch2);

		puts("Enter a string again (EOF to quit):");
	}
	puts("Done.\n");

	char arr71[80], arr72[80];
	int n;
	puts("SEVEN");
	puts("Enter a string (EOF to quit):");
	while (S_Gets(arr72, 80) != NULL)
	{
		puts("Enter an integer:");
		scanf("%d", &n);
		while (getchar() != '\n')
			continue;
		mystrncpy(arr71, arr72, n);
		puts("Your string:");
		puts(arr72);
		puts("Copied string:");
		puts(arr71);

		puts("Enter a string again (EOF to quit):");
	}
	puts("Done.\n");

	char arr81[80], arr82[80];
	puts("EIGHT");
	puts("Enter a string (EOF to quit):");
	while (S_Gets(arr81, 80) != NULL)
	{
		puts("Enter another string:");
		S_Gets(arr82, 80);
		if (string_in(arr81, arr82) != NULL)
			printf("%s is in the first string.\n", arr82);
		else
			printf("%s is not in the first string.\n", arr82);
		
		puts("Enter a string again (EOF to quit):");
	}
	puts("Done.\n");

	char arr9[80];
	puts("NINE");
	puts("Enter a string (EOF to quit):");
	while (S_Gets(arr9, 80) != NULL)
	{
		reverse(arr9);
		puts("reversed string:");
		puts(arr9);
		puts("Enter a string again (EOF to quit):");
	}
	puts("Done.\n");

	char arr10[80];
	puts("TEN");
	puts("Enter a string (empty line to quit):");
	while (S_Gets(arr10, 80) != NULL && arr10[0] != '\0')
	{
		nospace(arr10);
		puts("string without space:");
		puts(arr10);
		puts("Enter a string again (empty line to quit):");
	}
	puts("Done.\n");


	system("pause");
	return 0;
}

char* S_Gets(char* st, int n)
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

void s_gets(char* st, int n)
{
	int i = 0;
	while (i < n)
		st[i++] = getchar();
	st[i] = '\0';
	while (getchar() != '\n')
		continue;
}

void S_gets(char* st, int n)
{
	int i = 0;
	while (i < n)
	{
		st[i] = getchar();
		if (isspace(st[i]))
			break;
		i++;
	}
	st[i] = '\0';
	while (getchar() != '\n')
		continue;
}

void word(char* st)
{
	int i = 0;
	while (isspace(st[i] = getchar()))
		continue;
	while (!isspace(st[++i] = getchar()))
		continue;
	st[i] = '\0';

	while (getchar() != '\n')
		continue;
}

void words(char* st, int n)
{
	int i = 0;
	while (isspace(st[i] = getchar()))
		continue;
	while (i < n && !isspace(st[++i] = getchar()))
		continue;
	st[i] = '\0';

	while (getchar() != '\n')
		continue;
}

char* Strchr(const char* st, char ch)
{
	while (*st != '\0')
	{
		if (*st != ch)
			st++;
		else
			return st;
	}
	return NULL;
}

int is_within(char ch, const char* st)
{
	while (*st != '\0')
	{
		if (*st != ch)
			st++;
		else
			return 1;

	}
	return 0;
}

char* mystrncpy(char* s1, const char* s2, int n)
{
	int i;
	for (i = 0; i < n; i++)
		s1[i] = s2[i];
	if (s1[i - 1])
		s1[i] = '\0';

	return s1;
}

char* string_in(const char* s1, const char* s2)
{
	int i = 0;
	int j = 0;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	while (i < s1_len && j < s2_len)
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return j == s2_len ? &s1[i - j + 1] : NULL;
}

void reverse(char* st)
{
	int i;
	int n = strlen(st);
	char temp;
	for (i = 0; i < n / 2; i++)
	{
		temp = st[i];
		st[i] = st[n - 1 - i];
		st[n - 1 - i] = temp;
	}
}

void nospace(char* st)
{
	char* pt = st;

	while (*st)
	{
		if (!isspace(*st))
			*pt++ = *st++;
		else
			st++;
	}
	*pt = '\0';
}