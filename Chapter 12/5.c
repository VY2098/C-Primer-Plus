#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

void sort(int a[], int n);
void show_array(const int a[], int n);

int main(void)
{
    int i, a[LEN];

    srand((unsigned int)time(0));
    for (i = 0; i < LEN; i++)
    {
        a[i] = rand() % 10 + 1;
    }
    printf("Array:\n");
    show_array(a, LEN);
    sort(a, LEN);
    printf("After sorting:\n");
    show_array(a, LEN);

    return 0;
}

void sort(int a[], int n)
{
    int i, j, t;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    return;
}

void show_array(const int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%-3d ", a[i]);
        if ((i + 1) % 10 == 0)
        {
            putchar('\n');
        }
    }
    putchar('\n');
    return;
}