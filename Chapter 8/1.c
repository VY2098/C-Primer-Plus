#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int count = 0;
	char ch;
	while ((ch = getchar()) != EOF)
		count++;

	printf("The file has %d characters.\n", count);

	return 0;
}