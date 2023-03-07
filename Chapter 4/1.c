#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char first[40];
	char last[40];
	printf("Please enter your first name and your last name:\n");
	scanf("%s %s", first, last);
	printf("Hello, %s %s!\n", last, first);

	system("pause");
	return 0;
}