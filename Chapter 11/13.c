#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
	int i;
	puts("reversed words:");
	for (i = 1; i < argc; i++)
		printf("%s ", argv[argc - i]);

	printf("\nDone.\n");

	system("pause");
	return 0;
}