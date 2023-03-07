#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		printf("   ");

		if (ch >= ' ')
			printf("%d", (int)ch);
		else if (ch == '\n' || ch == '\t')
			printf("\\%s", ch == '\n' ? "n" : "t");
		else
			printf("^%c", ch + 64);

		printf("     ");
		i++;
		if (i == 10)
			printf("\n");
	}

	system("pause");
	return 0;
}