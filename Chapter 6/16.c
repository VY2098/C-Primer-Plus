#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float dap, dei;
	int i;
	dap = 100, dei = 100;
	for (i = 1; dap >= dei; i++)
	{
		dap += 10;
		dei += dei * 0.05;
		
	}
	printf("after %d years, Daphne has $%g, Deidre has $%g\n", i-1, dap, dei);

	system("pause");
	return 0;
}