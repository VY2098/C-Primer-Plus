#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define C_TO_I 2.54
#define I_TO_F 12
int main(void)
{
	float cen, inch;
	int feet;
	printf("Enter a height in centimeters: ");
	scanf("%f", &cen);
	feet = (cen / C_TO_I) / I_TO_F;
	inch = cen / C_TO_I - I_TO_F * feet;
	printf("%.1f cm = %d feet, %.1f inches\n", cen, feet, inch);
	printf("Enter a height in centimeters (<=0 to quit): ");
	scanf("%f", &cen);
	while (cen > 0)
	{
		feet = (cen / 2.54) / 12.0;
		inch = cen / 2.54 - 12 * feet;
		printf("%.1f cm = %d feet, %.1f inches\n", cen, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &cen);
	}
	printf("bye\n");

	system("pause");
	return 0;
}