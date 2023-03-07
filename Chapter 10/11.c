#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5
void show(const int ar[][COLS], int n);
void doub(int ar[][COLS], int n);
int main(void)
{
	int ar[ROWS][COLS] =
	{
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7}
	};
	printf("Original array:\n");
	show(ar, ROWS);
	doub(ar, ROWS);
	printf("Doubled array:\n");
	show(ar, ROWS);

	system("pause");
	return 0;
}

void show(const int ar[][COLS], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%3d", ar[i][j]);
		printf("\n");
	}
}

void doub(int ar[][COLS], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COLS; j++)
			ar[i][j] *= 2;
	}
}