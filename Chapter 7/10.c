#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define TAX1 0.15
#define TAX2 0.28
void taxs(float line, float income);
void head(void);
void eat(void);
int main(void)
{
	
	int type;
	float tax, inc, line;

	head();
	
	scanf("%d", &type);
	eat();
	while (type != 5)
	{
		switch (type)
		{
		case 1: printf("Enter the taxable income: ");
			scanf("%g", &inc);
			eat();
			line = 17850;
			taxs(line, inc);
			break;
		case 2: printf("Enter the taxable income: ");
			scanf("%g", &inc);
			eat();
			line = 23900;
			taxs(line, inc);
			break;
		case 3: printf("Enter the taxable income: ");
			scanf("%g", &inc);
			eat();
			line = 29750;
			taxs(line, inc);
			break;
		case 4: printf("Enter the taxable income: ");
			scanf("%g", &inc);
			eat();
			line = 14875;
			taxs(line, inc);
			break;
		default: printf("Enter a valid choice: ");
			scanf("%d", &type);
			eat();
			goto again;
		}
		type = 0;
		printf("Enter your choice: ");
		scanf("%d", &type);
		eat();

	    again: continue;
	}
	printf("Done\n");

	system("pause");
	return 0;

}

void taxs(float line, float income)
{
	float tax;
	if (income <= line)
		tax = TAX1 * income;
	else
		tax = TAX1 * line + (income - line) * TAX2;

	printf("Your tax is $%g\n", tax);

	return 0;
}

void head(void)
{
	int i;
	for (i = 0; i < 65; i++)
	    	printf("*");
	printf("\n");
	printf("Enter the number corresponding to the category action:\n");
	printf("1) Single                   2) Head of Household\n");
	printf("3) Married, Joint           4) married, Seperate\n");
	printf("5) quit\n");
	for (i = 0; i < 65; i++)
		printf("*");
	printf("\n");
}

void eat(void)
{
	while (getchar() != '\n')
		continue;

	return 0;
}