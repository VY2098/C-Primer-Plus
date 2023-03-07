#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int low, upp;
	int i;
	printf("Please input the lower and upper limits: ");
	scanf("%d %d", &low, &upp);
	for (i = low; i <= upp; i++)
		printf("%5d%5d%5d\n", i, i * i, i * i * i);

	system("pause");
	return 0;
}