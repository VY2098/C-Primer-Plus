#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<stdlib.h>
int main(void)
{
	int two[8];
	int i, pro;
	for (i = 0, pro = 1; i < 8; i++)
	{
		pro *= 2;
		two[i] = pro;
	}
	i = 0;
	do
	{
		printf("%5d", two[i]);
		i++;
	} while (i < 8);

		system("pause");
		return 0;
}