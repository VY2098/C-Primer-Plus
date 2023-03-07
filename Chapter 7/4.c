#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define STOP '#'
int main(void)
{
	char ch;
	int n = 0;
	printf("Enter something, # to quit:\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
		{
			putchar('!');
			n++;
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar('!');
			n++;
		}
		else
			putchar(ch);
	}
	printf("There are %d %s.\n", n, (n == 1 || n == 0) ? "replacement" : "replacements");

	system("pause");
	return 0;
}