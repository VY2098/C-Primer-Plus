#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define STOP '#'
int main(void)
{
	char ch;
	int flag = 1;
	printf("Enter something, # to quit:\n");
	while ((ch = getchar()) != STOP)
	{
		printf("%7c%5d", ch, ch);
		if (flag++ % 8 == 0)
			printf("\n");
	}
	printf("\nDone.\n");

	system("pause");
	return 0;
}