#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	int word, sum;
	word = sum = 0;
	bool inword = false;
	while ((ch = getchar()) != EOF)
	{
		if (ispunct(ch))
			continue;
		
		if (isalpha(ch))
			sum++;

		if (!isspace(ch) && !inword)
		{
			inword = true;
			word++;
		}

		if (isspace(ch) && inword)
			inword = false;
	}

	printf("Total words: %d.\n", word);
	printf("Total letters: %d.\n", sum);
	printf("Average letters of words: %g.\n", (float)sum / word);

	system("pause");
	return 0;
}