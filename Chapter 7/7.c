#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define P_RATE 10.00
#define O_RATE P_RATE * 1.5
#define T_RATE1 0.15
#define T_RATE2 0.20
#define T_RATE3 0.25
int main(void)
{
	int hou;
	float gro, tax, net;
	printf("Enter the hours worked in a week: ");
	scanf("%d", &hou);
	if (hou <= 40)
		gro = hou * P_RATE;
	else
		gro = 40 * P_RATE + (hou - 40) * O_RATE;

	if (gro <= 300)
	{
		tax = gro * T_RATE1;
		net = gro - tax;
	}
	else if (gro <= 450)
	{
		tax = 300 * T_RATE1 + (gro - 300) * T_RATE2;
		net = gro - tax;
	}
	else
	{
		tax = 300 * T_RATE1 + 150 * T_RATE2 + (gro - 450) * T_RATE3;
		net = gro - tax;
	}

	printf("Your gross pay is $%g\n", gro);
	printf("Your tax is $%g\n", tax);
	printf("Your net pay is $%g\n", net);

	system("pause");
	return 0;
}