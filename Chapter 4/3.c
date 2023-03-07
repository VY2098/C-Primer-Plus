#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	float num;
	printf("Please enter a floating-point number: ");
	scanf("%f", &num);
	printf("Your number in decimal-point notation is: %.1f\n", num);
	printf("Your number in exponential notation is: %.1e\n", num);

	system("pause");
	return 0;
}