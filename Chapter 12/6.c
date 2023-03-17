#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000
#define SEED 10

int main(void)
{
	int i, j;
	int arr[SEED] = { 0 };
	int temp;
	int seed;
	for (i = 0; i < SEED; i++)
	{
		printf("Please enter a seed: ");
		scanf("%d", &seed);
		srand(seed);
		for (j = 0; j < LEN; j++)
		{
			temp = rand() % 10 + 1;
			arr[temp - 1] += 1;
		}
		printf("Time %d:   ", i + 1);
		for (int n = 0; n < 10; n++)
		{
			printf("%d : %d   ", n + 1, arr[n]);
			arr[n] = 0;
		}
		printf("\n");
	}
	printf("Bye!");

	system("pause");
	return 0;
}