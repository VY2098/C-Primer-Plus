#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define STOP '#'
int main(void)
{
	char ch;
	int spa = 0, lin = 0, oth = 0;
	printf("Enter something, # to quit:\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == ' ')
			spa++;
		else if (ch == '\n')
			lin++;
		else
		    oth++;
	}
	printf("There are %d %s, %d new %s, and %d other %s.\n", spa, (spa == 1 || spa == 0) ? "space" : "spaces", lin, (lin == 1 || lin == 0) ? "line" : "lines", oth, (oth == 1 || oth == 0) ? "character" : "characters");

	system("pause");
	return 0;
}