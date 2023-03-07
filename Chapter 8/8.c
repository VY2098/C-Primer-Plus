#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char get_first(void);
float get_float(void);
void eat(void);
void head(void);
int main(void)
{
	float fir, sec, n;
	fir = sec = 0;
	head();
	char ch = get_first();

	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a': ch = '+';
			break;
		case 's': ch = '-';
			break;
		case 'm': ch = '*';
			break;
		case 'd': ch = '/';
			break;
		default: printf("Please enter a valid choice: ");
			ch = get_first();
			goto again;
			break;
		}

		printf("Enter first number: ");
		fir = get_float();
		eat();
		printf("Enter second number: ");
		sec = get_float();
		eat();
		if (ch == '/')
		{
			while (sec == 0)
			{
				printf("Enter a number other than 0: ");
				sec = get_float();
				eat();
			}
		}		

		switch (ch)
		{
		case '+': n = fir + sec;
			break;
		case '-': n = fir - sec;
			break;
		case '*': n = fir * sec;
			break;
		case '/': n = fir / sec;
			break;
		}

		printf("%g %c %g = %g\n", fir, ch, sec, n);

		head();
		ch = get_first();

	    again: continue;
	}

	printf("Bye.\n");

	system("pause");
	return 0;
}

void head(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add           s. subtract\n");
	printf("m. multiply      d. divide\n");
	printf("q. quit\n");

	return 0;
}

char get_first(void)
{
	int ch;
	while (isspace(ch = getchar()))
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}

float get_float(void)
{
	float i;
	int ch;
	while (scanf("%g", &i) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);

		printf(" is not a number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}

	return i;
}

void eat(void)
{
	while (getchar() != '\n')
		continue;

	return 0;
}