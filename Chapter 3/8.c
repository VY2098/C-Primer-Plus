#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float pin, cup, oun, tab, tea;
	printf("Please enter a volume in cups: ");
	scanf("%f", &cup);
	pin = cup / 2;
	oun = cup * 8;
	tab = oun * 2;
	tea = tab * 3;
	printf("%.2f cups is %.2f pints, %.2f ounces, %.2f tablespoons, %.2f teaspoons\n", cup, pin, oun, tab, tea);

	system("pause");
	return 0;
}