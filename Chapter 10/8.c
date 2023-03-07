#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void copy1(double ar[], const double source[], int n);
int main(void)
{
	const double source[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	double target[3];
	copy1(target, source + 2, 3);

	system("pause");
	return 0;
}

void copy1(double ar[], const double source[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] = source[i];

	printf("target:");
	for (i = 0; i < n; i++)
		printf("%4g", ar[i]);
	printf("\n");
}