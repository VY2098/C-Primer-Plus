#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
double power(double x, int i);
int main(void)
{
	double x, p;
	int i;
	printf("Enter a float point number and an integer:\n");
	while (scanf("%lf %d", &x, &i) == 2)
	{
		p = power(x, i);
		if (x != 0 || i != 0)
			printf("%g to %d is %g\n", x, i, p);

		printf("Enter again (q to quit):\n");
	}
	printf("Bye\n");
	
	system("pause");
	return 0;
}

double power(double x, int i)
{
	double power = 1;
	int n;

	if (x == 0)
	{
		if (i == 0)
		{
			printf("0 to the 0 is undefined, it's using a value of 1.\n");
			power = 1;

		}
		else
			power = 0;
	}
	else
	{
	    if (i > 0)
	    {
		    for (n = 0; n < i; n++)
			    power *= x;
	    }
	    else if (i == 0)
		    power = 1;
	    else
	    {
		    for (n = 0; n > i; n--)
			    power *= (1 / x);
	    }
	}

	return power;
}