#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num[8];
	int i;
	for (i = 0; i < 8; i++)
		scanf("%d", &num[i]);
	for (i = 7; i >= 0; i--)
		printf("%3d", num[i]);

	system("pause");
	return 0;

}