#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void cube(float x);
int main(void)
{
	float num;
	printf("Please enter a number: ");
    scanf("%f", &num);
	while (num > 0)
	{
		cube(num);
		printf("Please enter a number: ");
		scanf("%f", &num);
	}
	printf("bye\n");

	system("pause");
	return 0;
}

void cube(float x)
{
	printf("The cube of %.2f is %.2f\n", x, x * x * x);
}