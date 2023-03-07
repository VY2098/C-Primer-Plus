#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int low, upp, sum, squ;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &low, &upp);
	do
	{
		for (squ = low, sum = 0; squ <= upp; squ++)
			sum += squ * squ;
		printf("The sum of the squares from %d to %d is %d\n", low, upp, sum);
		printf("Enter lower and upper integer limits: ");
		scanf("%d %d", &low, &upp);
	} while (low < upp);
	printf("Done\n");

	system("pause");
	return 0;
}