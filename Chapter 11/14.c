#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(int agrc, char* agrv[])
{
	double x, power;
	int i, n;
	x = atof(agrv[1]);
	n = atoi(agrv[2]);
	power = 1;
	for (i = 0; i < n; i++)
		power *= x;
	printf("%g to %d is %g", x, n, power);

	system("pause");
	return 0;
}