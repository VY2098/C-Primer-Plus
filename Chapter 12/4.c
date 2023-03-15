#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void retime(int* n);

int main(void)
{
	int time = 0;
	int inp;

	printf("Enter a number: ");
	scanf("%d", &inp);
	for (int i = 0; i < inp; i++)
		retime(&time);

	printf("You have called this fuction %d %s!", time, (time == 1) ? "time" : "times");

	return 0;
}

void retime(int* n)
{
	printf("%d\n", *n + 1);
	*n += 1;
}