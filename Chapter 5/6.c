#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int count, sum, day;

	count = 0;
	sum = 0;
	scanf("%d", &day);
	while (count++ < day)
		sum = sum + count * count;
	printf("sum = %d\n", sum);

	system("pause");
	return 0;
}