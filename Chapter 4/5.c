#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float speed, size;
	printf("Please enter the download speed and the file size:\n");
	scanf("%f %f", &speed, &size);
	printf("At %.2f speed per second, a file of %.2f megabytes\n\
downloads in %.2f seconds.\n", speed, size, 8*size/speed);

	system("pause");
	return 0;
}