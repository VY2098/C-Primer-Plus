#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x;
	printf("Please enter a value: ");
	scanf("%d", &x);
	int y = x + 10;
	printf("%d ", x);
	while (x++ < y)
		printf("%d ", x);

	system("pause");
	return 0;
}