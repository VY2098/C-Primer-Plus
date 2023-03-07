#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	int even, odd, esum, osum;
	even = odd = esum = osum = 0;
	printf("Enter some integers, 0 to quit:\n");

	while ((scanf("%d", &num) == 1) && (num != 0))
	{
		if (num % 2 == 0)
		{
			even++;
			esum += num;
		}
		else
		{
			odd++;
			osum += num;
		}
	}
	printf("There are %d even %s and %d odd %s.\n", even, (even == 1 || even == 0) ? "number" : "numbers", odd, (odd == 1 || odd == 0) ? "number" : "numbers");
	
	if (even != 0 && odd != 0)
	{
		printf("The average are %g and %g repectively.\n", (float)esum / even, (float)osum / odd);
	}
	else if (even == 0)
		printf("The average is %g.\n", (float)osum / odd);
	else
		printf("The average is %g.\n", (float)esum / even);


	system("pause");
	return 0;
}