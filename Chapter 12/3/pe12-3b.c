#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "pe12-3a.h"

int main(void)
{
	int mode, temp;
	float dis, fuel;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);

	while (mode >= 0)
	{
		set_mode(&mode, &temp);
		get_info(temp, &dis, &fuel);
		show_info(temp, &dis, &fuel);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");
	return 0;
}