#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	float sum = 1000000;
	for (i = 1; sum > 0; i++)
	{
		sum *= 1.08;
		sum -= 100000;
	}
	printf("after %d years, Chuckie empties his account\n", i - 1);

	system("pause");
	return 0;
}