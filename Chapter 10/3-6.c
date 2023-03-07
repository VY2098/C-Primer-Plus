#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int large(const int ar[], int n);
int index(const double ar[], int n);
double diff(const double ar[], int n);
void reverse(double ar[], int n);

int main(void)
{
	int i;
	const int source1[5] = { 1, 2, 3, 4, 5 };
	double source2[5] = { 1.1, 2.2, 6.6, 4.4, 3.3 };
	double source3[6] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	printf("THREE\n");
	printf("The largest value in this array is: %d\n\n", large(source1, 5));

	printf("FOUR\n");
	printf("The index of the largest value is: %d\n\n", index(source2, 5));

	printf("FIVE\n");
	printf("The difference between the largset and the smallest is: %g\n\n", diff(source2, 5));

	printf("SIX\n");
	reverse(source2, 5);
	for (i = 0; i < 5; i++)
		printf("%5g", source2[i]);
	printf("\n");

	system("pause");
	return 0;
}

int large(const int ar[], int n)
{
	int i, v;
	v = *ar;
	for (i = 1; i < n; i++)
	{
		if (v < ar[i])
			v = ar[i];
	}

	return v;
}

int index(const double ar[], int n)
{
	int i, j;
	double v;
	v = *ar;
	for (i = 1, j = 0; i < n; i++)
	{
		if (v < ar[i])
		{
			v = ar[i];
			j = i;
		}
	}

	return j;
}

double diff(const double ar[], int n)
{
	double small, big;
	int i;
	small = big = *ar;
	for (i = 1; i < n; i++)
	{
		if (small > ar[i])
			small = ar[i];
		if (big < ar[i])
			big = ar[i];
	}

	return big - small;
}

void reverse(double ar[], int n)
{
	int i;
	double temp;
	for (i = 0; i < n / 2; i++)
	{
		temp = ar[i];
		ar[i] = ar[n - 1 - i];
		ar[n - 1 - i] = temp;
	}
}