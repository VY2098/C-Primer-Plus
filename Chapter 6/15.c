#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char ch[255];
	int i = 0;
	scanf("%c", &ch[0]);
	while (ch[i] != '\n')
	{
		i++;
		scanf("%c", &ch[i]);
	}
	for (i -= 1; i >= 0; i--)
		printf("%c", ch[i]);
	printf("\n");
	
	system("pause");
	return 0;
}