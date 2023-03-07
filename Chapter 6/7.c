#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i;
	char word[40];
	printf("Please enter a single word: ");
	scanf("%s", word);
	for (i = strlen(word) - 1; i >= 0; i--)
		printf("%c", word[i]);

	system("pause");
	return 0;
}