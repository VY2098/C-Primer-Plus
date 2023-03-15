#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void critic(int x);

int main(void)
{
	int units;

	printf("How many pounds to a firkim of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(units);
	printf("You must have looked it up!\n");

	return 0;
}

void critic(int x)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &x);
}