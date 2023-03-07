#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int time(int i);
int main(void)
{
	int term, i;
	float sum1, sum2;
	printf("Please enter a number of term: ");
	scanf("%d", &term);
	while (term > 0)
	{
		for (i = 1, sum1 = 0, sum2 = 0; i <= term; i++)
		{
            sum1 += 1.0 / i;
			sum2 += time(i) * 1.0 / i;
		}
		   
		printf("the first serie's sum is %g\n", sum1);
		printf("the second serie's sum is %g\n\n", sum2);
		printf("Please enter a number of term: ");
		scanf("%d", &term);
	}
	printf("Done\n");

	system("pause");
	return 0;
}

int time(int i)
{
	int j;
	int v = -1;
	for (j = 0; j < i; j++)
		v *= (-1);

	return v;
}