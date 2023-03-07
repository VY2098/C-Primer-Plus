#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define NUMBER 150
int main(void)
{
	int sum = 5, week = 1;
	for (week = 1, sum = 5; sum < NUMBER; week++)
	{
		printf("At %d weeks, Rabnud has %d friends.\n", week, sum);
		sum -= week;
		sum *= 2;	
	}

	system("pause");
	return 0;
}