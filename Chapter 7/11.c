#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define ART 2.05
#define BEE 1.15
#define CAR 1.09
#define SHIP1 6.50
#define SHIP2 14.00
#define SHIP3 14.50
void eat(void);
int main(void)
{
	char ch;
	float art, bee, car, sum1, sum2, sum3, ship;
	sum1 = sum2 = sum3 = 0;

	printf("a is for artichokes, b is for beets, c is for carrots.\n");
	printf("Enter the type of things you want, q to quit: ");

	scanf("%c", &ch);
	eat();
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a': printf("Enter the pounds of artichokes you want: ");
			scanf("%g", &art);
			eat();
			sum1 += art;
			break;
		case 'b': printf("Enter the pounds of beets you want: ");
			scanf("%g", &bee);
			eat();
			sum2 += bee;
			break;
		case 'c': printf("Enter the pounds of carrots you want: ");
			scanf("%g", &car);
			eat();
			sum3 += car;
			break;
		default: printf("Enter a valid type: ");
			scanf("%c", &ch);
			eat();
			goto stop;
		}
		ch = 0;
		printf("Enter the type of things you want, q to quit: ");
		scanf("%c", &ch);
		eat();

	    stop: continue;
	}

	float cost = sum1 * ART + sum2 * BEE + sum3 * CAR;
	float sum = sum1 + sum2 + sum3;
	art = sum1 * ART;
	bee = sum2 * BEE;
	car = sum3 * CAR;
	int flag = 0;

	if (cost >= 100)
	{
		cost *= 0.95;
		art = sum1 * ART * 0.95;
		bee = sum2 * BEE * 0.95;
		car = sum3 * CAR * 0.95;
		flag = 1;
	}

	if (sum <= 5)
		ship = SHIP1 * sum;
	else if (sum <= 20)
		ship = SHIP2 * sum;
	else
		ship = SHIP3 * sum;

	printf("The cost per pound is $%g\n", cost / sum);
	printf("The pounds ordered is %g\n", sum);
	printf("The cost for artichokes is $%g\n", art);
	printf("The cost for beets is $%g\n", bee);
	printf("The cost for carrots is $%g\n", car);
	printf("The total cost is $%g\n", cost);
	if (flag)
		printf("Congrats! There is a 5%% discound!\n");
	printf("The ship charge is $%g\n", ship);
	printf("The grand total of all charges is $%g\n", ship + cost);

	system("pause");
	return 0;
}

void eat(void)
{
	while (getchar() != '\n')
		continue;

	return 0;
}