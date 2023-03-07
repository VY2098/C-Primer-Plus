#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define STOP '#'
int main(void)
{
	char ch;
	int n = 0, flag = 0;
	printf("Enter something, # to quit:\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == 'e')
		{
			flag = 1;
			continue;
		}

		if (flag == 1 && ch == 'i')
		{
			n++;
			flag = 0;
			continue;
		}
		flag = 0;
	}
	printf("There are %d %s the sequence ei occurs.\n", n, (n == 0 || n == 1) ? "time" : "times");

	system("pause");
	return 0;
}