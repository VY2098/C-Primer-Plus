#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char first[40];
	
	printf("Please enter your first name:\n");
	scanf("%s", first);
	
	int len = strlen(first) + 3;
	
	printf("So your first name is \"%20s\"!\n", first);
	printf("So your first name is \"%-20s\"!\n", first);
	printf("So your first name is \"%*s\"!\n", len, first);

	system("pause");
	return 0;
}