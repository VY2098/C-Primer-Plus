#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define LITER 3.785 * gallon
#define KILO 1.609 * mile
int main(void)
{
	float gallon, mile;
	printf("Please enter the number of miles traveled and the number of \
gallons of gasoline consumed:\n");
	scanf("%f %f", &mile, &gallon);
	printf("the miles-per-gallon value is: %.1f\n", mile / gallon);
	printf("the liters-per-100-km value is: %.1f\n", LITER / (KILO / 100));
	
	system("pause");
	return 0;
}