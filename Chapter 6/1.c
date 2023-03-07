#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	char j, ch[26];
	for (i = 0, j = 'a'; i < 26; i++, j++)
	{
		ch[i] = j;
		printf("%c ", ch[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}