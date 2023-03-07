#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float hei;
	printf("Please enter your height in inches: ");
	scanf("%f", &hei);
	float cen = hei * 2.54;
	printf("So your height in centimeters is %.2f", cen);

	system("pause");
	return 0;
}