#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define F_TO_C1 5.0 / 9.0
#define F_TO_C2 32.0
#define C_TO_K 273.16
void Temperatures(double x);
int main(void)
{
	double fah;
	printf("Please enter a temperature in Fahrenheit: ");
	int x = scanf("%lf", &fah);
	while (x == 1)
	{
        Temperatures(fah);
		printf("Please enter a temperature in Fahrenheit (nonnumeric to quit): ");
		x = scanf("%lf", &fah);
	}
	printf("done\n");

	system("pause");
	return 0;
}

void Temperatures(double x)
{
	double cel = F_TO_C1 * (x - F_TO_C2);
	double kel = cel + C_TO_K;
	printf("%.2lf F is %.2lf C or %.2lf K\n", x, cel, kel);

}