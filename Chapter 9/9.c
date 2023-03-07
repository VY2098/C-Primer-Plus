#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
double pos(double x, int n);
double neg(double x, int n);
int main(void)
{
	double x;
	int n;
	printf("Enter a float number and an integer:\n");
	while (scanf("%lf %d", &x, &n) == 2)
	{
		if (x == 0)
		{
			if (n == 0)
				printf("0 to 0 is undefined, it's using a value of 1\n");
			else
				printf("%g to %d is 0", x, n);
		}
		else
		{
			if (n > 0)
				printf("%g to %d is %g\n", x, n, pos(x, n));
			else
				printf("%g to %d is %g\n", x, n, neg(x, n));
		}

		printf("Enter again, q to quit:\n");
	}
	printf("Done.\n");

	system("pause");
	return 0;
}

double pos(double x, int n)
{
	double power;
	if (n >= 1)
		power = x * pos(x, n - 1);
	else
		power = 1;

	return power;
}

double neg(double x, int n)
{
	double power;
	if (n <= -1)
		power = 1 / x * neg(x, n + 1);
	else
		power = 1;

	return power;
}