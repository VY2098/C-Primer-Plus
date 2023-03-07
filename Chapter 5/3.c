#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define D_TO_W 7
int main(void)
{
	int day, week, left;

	printf("This program converts days to weeks and days.\n");
	printf("Just enter the number of days.\n");
	printf("Enter 0 to end the program.\n");
	scanf("%d", &day);
	while (day > 0)
	{
		week = day / D_TO_W;
		left = day % D_TO_W;
		printf("%d days are %d weeks, %d days.\n", day, week, left);
		printf("Next input?\n");
		scanf("%d", &day);
	}

	printf("BYE!\n");

	system("pause");
	return 0;
}