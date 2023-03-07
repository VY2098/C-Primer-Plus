#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned n, i;
	unsigned long num, last, temp;
	num = 1;
	last = 1;

	printf("Enter a number: ");
	while (scanf("%u", &n) == 1)
	{
		if (n <= 2)
			num = 1;
		else
		{
			for (i = 3; i <= n; i++)
			{
				temp = num;
				num += last;
				last = temp;
			}
		}
		printf("The %u number in Fibonacci is %lu\n", n, num);
		printf("Try again: ");

		num = 1;
		last = 1;
	}
	printf("Done.\n");

	system("pause");
	return 0;
}