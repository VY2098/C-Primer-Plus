#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	double fir[8], sec[8];
	printf("Enter 8 values: ");
	scanf("%lf", &fir[0]);
	sec[0] = fir[0];
	for (i = 1; i < 8; i++)
	{
        scanf("%lf", &fir[i]);
		sec[i] = sec[i - 1] + fir[i];
	}
	for (i = 0; i < 8; i++)
		printf("%7.2lf", fir[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%7.2lf", sec[i]);
	printf("\n");

	system("pause");
	return 0;
}