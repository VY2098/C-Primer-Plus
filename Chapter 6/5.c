#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char x, y;
	int row, spa, as, des;
	printf("Please enter an uppercase letter: ");
	scanf("%c", &x);
	for (row = 1; row <= x - 'A' + 1; row++)
	{
		for (spa = x - 'A' - row; spa >= 0; spa--)
			printf(" ");

		for (as = 1, y = 'A'; as <= row; as++, y++)
			printf("%c", y);

		for (des = 1; des < row; des++, y--)
			printf("%c", y);

		printf("\n");
	}

	system("pause");
	return 0;
}