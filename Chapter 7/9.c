#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int prime(int num);
int main(void)
{
	int num, i;
	printf("Enter a positive integer, <= 0 to quit: ");
	
	scanf("%d", &num);
	while (num > 0)
	{
		if (num == 1 || num == 2 || num == 3)
		{
			printf("there is no prime.\n");
			printf("try again: ");
			scanf("%d", &num);
		}
		else
		{
			for (i = 1; i <= num; i++)
				if (prime(i))
					printf("%3d", i);

			printf("\nEnter a positive integer, <= 0 to quit: ");
			scanf("%d", &num);
		}
	}
	system("pause");
	return 0;
}

int prime(int num)
{
	int i, flag = 0;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			flag += 1;
			break;
		}
	}

	return flag;
}