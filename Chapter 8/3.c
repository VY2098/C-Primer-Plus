#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	i = j = k = 0;
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			i++;
		else if (islower(ch))
			j++;
		else
			k++;
	}

	printf("There are %d uppercase %s\n", i, (i == 1 || i == 0) ? "letter" : "letters");
	printf("There are %d lowercase %s\n", j, (j == 1 || j == 0) ? "letter" : "letters");
	printf("There are %d other %s\n", k, (k == 1 || k == 0) ? "letter" : "letters");

	system("pause");
	return 0;
}