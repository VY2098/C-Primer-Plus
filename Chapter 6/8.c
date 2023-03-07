#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float one, two;
	printf("Please enter two floating-point numbers (q to quit): ");
	for (; scanf("%g %g", &one, &two) == 2;)
	{
		printf("%g\n", (one - two) / (one * two));
		printf("Please enter two floating-point numbers (q to quit): ");
	}
	printf("done!\n");

	system("pause");
	return 0;
}