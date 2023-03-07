#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5
void copy(double tar[][COLS], const double source[][COLS], int n);
void show(const double source[][COLS], int n);
int main(void)
{
	const double source[ROWS][COLS] =
	{
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{9.9, 8.8, 7.7, 6.6, 5.5},
		{1.9, 2.8, 3.7, 4.6, 5.5}
	};
	double target[3][5];
	copy(target, source, ROWS);
	show(target, ROWS);

	system("pause");
	return 0;
}

void copy(double tar[][COLS], const double source[][COLS], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COLS; j++)
			tar[i][j] = source[i][j];
	}
}

void show(const double source[][COLS], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%5g", source[i][j]);
		printf("\n");
	}
}