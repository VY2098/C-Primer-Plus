#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void menu(void);
int choice(int i, int j);

int main(void)
{
	int ch;
	int x, y;
	x = 1;
	y = 4;

	menu();
	while (ch = choice(x, y) != 4)
	{
		switch (ch)
		{
		case 1: printf("copy files\n");
			break;
		case 2: printf("move files\n");
			break;
		case 3:printf("remove files\n");
			break;
		}
	}
	printf("bye!\n");

	system("pause");
	return 0;
}

void menu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copy files            2) move files\n");
	printf("3) remove files          4) quit\n");
	printf("Enter the number of your choice:\n");
}

int choice(int i, int j)
{
	int ch, n;
	n = scanf("%d", &ch);
	
	while ((n != 1) || ch<i || ch>j)
	{
		if (n != 1)
			return 4;
		else
		{
			printf("Enter an integer inside the limits.\n");
			n = scanf("%d", &ch);
		}
	}

	return ch;
}