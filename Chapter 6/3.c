#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	for (i = 1; i <= 6; i++)
	{
		char x = 'F';
		for (j = 1; j <= i; j++, x--)
			printf("%c", x);
		printf("\n");
	}
	system("pause");
	return 0;
}