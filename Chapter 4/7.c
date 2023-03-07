#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
int main(void)
{
	double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0f;
	printf("%.4f %.4f\n", num1, num2);
	printf("%.12f %.12f\n", num1, num2);
	printf("%.16f %.16f\n", num1, num2);
	printf("%d %d\n", FLT_DIG, DBL_DIG);

	system("pause");
	return 0;
}