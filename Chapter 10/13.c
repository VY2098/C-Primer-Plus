#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void store(double ar[][5]);
double ave(const double ar[]);
double aves(const double ar[][5]);
double large(const double ar[][5]);
void show(const double ar[][5]);
int main(void)
{
	int i;
	double arr[3][5];
	store(arr);
	for (i = 0; i < 3; i++)
		printf("The average of line %d is %g\n", i + 1, ave(arr[i]));

	printf("The average of all the values is %g\n", aves(arr));

	printf("The largest value if the 15 values is %g\n", large(arr));

	show(arr);

	system("pause");
	return 0;
}

void store(double ar[][5])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		printf("Enter a set of five double numbers:\n");
		for (j = 0; j < 5; j++)
			scanf("%lf", &ar[i][j]);
	}
}

double ave(const double ar[])
{
	int i;
	double sum;
	for (i = 0, sum = 0; i < 5; i++)
		sum += *(ar + i);

	return sum / 5;
}

double aves(const double ar[][5])
{
	int i, j;
	double sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			sum += ar[i][j];
	}

	return sum / 15;
}

double large(const double ar[][5])
{
	int i, j;
	double large = ar[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (large < ar[i][j])
				large = ar[i][j];
		}
	}

	return large;
}

void show(const double ar[][5])
{
	int i, j;
	printf("The 3x5 array is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5g", ar[i][j]);
		printf("\n");
	}
}