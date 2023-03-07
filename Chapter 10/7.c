#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void copy1(double ar[], const double source[], int n);
void copy2(double ar[][5], const double source[][5], int n);
int main(void)
{
	int i, j;
	const double source[4][5] =
	{
		{1.2, 2.3, 3.4, 4.5, 5.6},
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{5.4, 4.3, 3.2, 2.1, 1.9},
		{9.9, 8.8, 7.7, 6.6, 5.5}
	};

	double target[4][5];
	copy2(target, source, 4);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5g", target[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}

void copy1(double ar[], const double source[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] = source[i];
}

void copy2(double ar[][5], const double source[][5], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		copy1(ar[i], source[i], 5);
	}
}