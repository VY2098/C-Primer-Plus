#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char first[40];
	char last[40];
	printf("Please enter your name:\n");
	scanf("%s %s", first, last);

	int len1 = strlen(first), len2 = strlen(last);
	printf("%s %s\n%*d %*d\n", first, last, len1, len1, len2, len2);
	printf("%s %s\n%-*d %-*d\n", first, last, len1, len1, len2, len2);

	system("pause");
	return 0;
}