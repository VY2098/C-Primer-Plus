#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void copy1(double ar[], const double source[], int n);
void copy2(double* ar, const double* source, int n);
void copy3(double ar[], const double source[], const double* last);
int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	int i;

	printf("source array:");
	for (i = 0; i < 5; i++)
		printf("%4g", source[i]);
	printf("\n");

	copy1(target1, source, 5);
	copy2(target2, source, 5);
	copy3(target3, source, source + 5);

	system("pause");
	return 0;
}

void copy1(double ar[], const double source[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] = source[i];

	printf("target 1:");
	for (i = 0; i < n; i++)
		printf("%4g", ar[i]);
	printf("\n");
}

void copy2(double* ar, const double* source, int n)
{
	int i;
	printf("target 2:");
	for (i = 0; i < n; i++)
	{
		*ar++ = *(source + i);
		printf("%4g", *(ar - 1));
	}
	printf("\n");
}

void copy3(double ar[], const double source[], const double* last)
{
	int i = 0;
	printf("target 3:");
	for (i = 0; i < last - source; i++)
	{
		*(ar + i) = *(source + i);
		printf("%4g", *(ar + i));
	}
		
	printf("\n");
}