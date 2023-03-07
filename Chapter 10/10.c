#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void sums(const int ar1[], const int ar2[], int ar3[], int n);
int main(void) 
{
	const int ar1[4] = { 2, 4, 5, 8};
	const int ar2[4] = { 1, 0, 4, 6 };
	int ar3[4];
	sums(ar1, ar2, ar3, 4);
	printf("\n");

	system("pause");
	return 0;
}

void sums(const int ar1[], const int ar2[], int ar3[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ar3[i] = ar1[i] + ar2[i];
		printf("%3d", ar3[i]);
	}
}