#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float value;
	printf("Enter a floating-point value:");
	scanf("%f", &value);
	printf("fixed-point notation: %f\n", value);
	printf("exponential notation: %e\n", value);
	printf("p notation: %.2a\n", value);

	system("pause");
	return 0;
}