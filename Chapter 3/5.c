#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int year;
	printf("Please enter your age: ");
	scanf("%d", &year);
	long double sec = year * 3.156e7;
	printf("So your age is equals to %.0Lf seconds.\n", sec);

	system("pause");
	return 0;

}