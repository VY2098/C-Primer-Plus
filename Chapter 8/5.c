#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void eat(void);
int main(void)
{
    int high = 100;
    int low = 1;
    int guess = (high + low) / 2;
    int response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right, with");
    printf("\na h if it is high, and with an l if it is low.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == '\n')
        {
            continue;
        }
        if (tolower(response) != 'h' && tolower(response) != 'l')
        {
            printf("I don't understand that response. Please enter h for\n");
            printf("high, l for low, or y for correct.\n");
            continue;
        }
        if (tolower(response) == 'h')
        {
            high = guess - 1;
        }
        else if (tolower(response) == 'l')
        {
            low = guess + 1;
        }
        guess = (high + low) / 2;
        eat();

        printf("Well, then, is it %d?\n", guess);
    }
    printf("I knew I could do it!\n");

    return 0;
}

void eat(void)
{
    while (getchar() != '\n')
        continue;
}