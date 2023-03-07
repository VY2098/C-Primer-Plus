#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void to_base_n(unsigned long n, int i);
int main(void)
{
	unsigned long num;
	int i;
	printf("Enter two integers, q to quit:\n");
	while (scanf("%lu %d", &num, &i) == 2)
	{
		if (i < 2 || i>10)
		{
			printf("The second integer should be between 2 and 10, try again:\n");
			continue;
		}

		printf("Base-%d equivalent: ", i);
		to_base_n(num, i);
		putchar('\n');
		printf("Enter again:\n");
	}
	printf("Done.\n");

	system("pause");
	return 0;
}

void to_base_n(unsigned long n, int i)
{
	int r;
	r = n % i;
	if (n >= i)
		to_base_n(n / i, i);
	printf("%d", r);

	return;
}