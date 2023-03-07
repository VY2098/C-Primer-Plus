#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
float fun(float x, float y);
int main(void)
{
	float one, two;
	printf("Please enter two floating-point numbers (q to quit): ");
	for (; scanf("%g %g", &one, &two) == 2;)
	{
		printf("%g\n", fun(one, two));
		printf("Please enter two floating-point numbers (q to quit): ");
	}
	printf("done!\n");

	system("pause");
	return 0;
}

float fun(float x, float y)
{
	float fun = (x - y) / (x * y);

	return fun;
}