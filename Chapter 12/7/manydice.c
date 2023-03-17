#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
	int sets;
	int dice, roll;
	int sides;

	srand((unsigned int) time(0));
	printf("Enter the number of sets; enter q to stop: ");
	while (scanf("%d", &sets) == 1)
	{
		printf("How many sides and how many dice? ");
		if (scanf("%d %d", &sides, &dice) != 2)
		{
			while (getchar() != '\n')
				continue;
			printf("You should enter two integers, try again!\n");
			printf("How many sets? Enter q to stop: ");
			continue;
		}
		printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
		for (int i = 0; i < sets; i++)
		{
			roll = roll_n_dice(dice, sides);
			printf("%d   ", roll);
		}
		printf("\n");
		printf("How many sets? Enter q to stop: ");
	}

	printf("Done.");
	return 0;
}