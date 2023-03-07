#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define O_RATE 1.5
#define T_RATE1 0.15
#define T_RATE2 0.20
#define T_RATE3 0.25
void salary(float rate, int hour);
void head(void);
void eat(void);
char get_first(void);
int main(void)
{
	int i, hou, ch;
	float rate;
	head();

	ch = get_first();
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a': printf("Enter the hours worked in a week: ");
			scanf("%d", &hou);
			eat();
			rate = 8.75;
			salary(rate, hou);
			break;
		case 'b': printf("Enter the hours worked in a week: ");
			scanf("%d", &hou);
			eat();
			rate = 9.33;
			salary(rate, hou);
			break;
		case 'c': printf("Enter the hours worked in a week: ");
			scanf("%d", &hou);
			eat();
			rate = 10.00;
			salary(rate, hou);
			break;
		case 'd': printf("Enter the hours worked in a week: ");
			scanf("%d", &hou);
			eat();
			rate = 11.20;
			salary(rate, hou);
			break;
		default: printf("Enter a valid choice: ");
			ch = get_first();
			goto again;
		}
		ch = 0;
		printf("Enter your choice: ");
		ch = get_first();

	again: continue;
	}
	printf("Done\n");

	system("pause");
	return 0;

}

void salary(float rate, int hour)
{
	float gro, tax, net;
	if (hour <= 40)
		gro = hour * rate;
	else
		gro = 30 * rate + (hour - 30) * rate * O_RATE;

	if (gro <= 300)
		tax = gro * T_RATE1;
	else if (gro <= 450)
		tax = 300 * T_RATE1 + (gro - 300) * T_RATE2;
	else
		tax = 300 * T_RATE1 + 150 * T_RATE2 + (gro - 450) * T_RATE3;

	net = gro - tax;
	printf("Your gross pay is $%g\n", gro);
	printf("Your tax is $%g\n", tax);
	printf("Your net pay is $%g\n", net);

	return 0;
}

void eat(void)
{
	while (getchar() != '\n')
		continue;

	return 0;
}

void head(void)
{
	int i;

	for (i = 0; i < 65; i++)
		printf("*");
	printf("\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a. $8.75/hr                         b. $9.33/hr\n");
	printf("c. $10.00/hr                        d. $11.20/hr\n");
	printf("q. quit\n");
	for (i = 0; i < 65; i++)
		printf("*");
	printf("\n");

	return 0;
}

char get_first(void)
{
	int ch;

	while (isspace(ch = getchar()))
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}