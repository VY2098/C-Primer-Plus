#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
	int num;
	static char word[256];
	char** arr;

	printf("How many words do you wish to enter? ");
	scanf("%d", &num);
	arr = (char**)malloc(num * sizeof(char*));
	if (arr != NULL)
	{
		printf("Enter %d words now:\n", num);
		for (int i = 0; i < num; i++)
		{
			scanf("%255s", word);
			arr[i] = (char*)malloc((strlen(word) + 1) * sizeof(char));
			if (arr[i] == NULL)
			{
				printf("Memory allocation failed!\n");
				exit(EXIT_FAILURE);
			}
			strcpy(arr[i], word);
		}

		printf("Here are your words:\n");
		for (int i = 0; i < num; i++)
		{
			puts(arr[i]);
			free(arr[i]);
		}
		free(arr);
	}
	
	return 0;
}