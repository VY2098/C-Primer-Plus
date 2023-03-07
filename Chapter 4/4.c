#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float height;
	char name[40];
	printf("Please enter your height in inches and your name\n");
	scanf("%f %s", &height, name);
	printf("%s, you are %.3f feet tall\n", name, height);

	system("pause");
	return 0;

}
