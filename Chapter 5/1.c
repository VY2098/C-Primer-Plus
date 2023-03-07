#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define M_TO_H 60
int main(void)
{
	int min, hou, left;

	printf("This program converts minutes to hours and minutes.\n");
	printf("Just enter the number of minutes.\n");
	printf("Enter 0 to end the program.\n");
	scanf("%d", &min);
	while (min > 0)
	{
		hou = min / M_TO_H;
		left = min % M_TO_H;
		printf("%d minutes are %d hours, %d minutes.\n", min, hou, left);
		printf("Next input?\n");
		scanf("%d", &min);
	}

	printf("BYE!\n");

	system("pause");
	return 0;
}