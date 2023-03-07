#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int replace(char ch);
int main(void)
{
	char ch;
	while ((ch = getchar()) != EOF)
		printf("%d\n", replace(ch));

	system("pause");
	return 0;

}

int replace(char ch)
{
	if (isalpha(ch))
	{
		if (islower(ch))
			return (int)ch - 96;
		else
			return (int)ch - 64;
	}
	else
		return -1;
}