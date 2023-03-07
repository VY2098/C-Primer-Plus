#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
double small(double x, double y);
void chline(char ch, int i, int j);
double harmonic(double x, double y);
void larger_of(double* x, double* y);
void sequence(double* x, double* y, double* z);

int main(void)
{
    double a, b;

    printf("ONE\nPlease enter two numbers (q to quit): ");
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("Minimum: %g\n", small(a, b));
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");
    getchar();
    getchar();

    printf("\nTWO & THREE\nPlease enter two numbers and a character (q to quit): ");
    char ch;  
    int i, j;
    while (scanf("%d %d", &i, &j) == 2)
    {
        while (iswspace(ch = getchar()))
            continue;
        while (!iswspace(getchar()))
            continue;
        chline(ch, i, j);
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");
    getchar();

    printf("\nFOUR\nPlease enter two numbers and a character (q to quit): ");
    double x, y;
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The harmonic mean is %g\n", harmonic(x, y));
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");
    getchar();

    double u, v;

    printf("\nFIVE\nPlease enter two numbers (q to quit): ");
    while (scanf("%lf %lf", &u, &v) == 2)
    {
        larger_of(&u, &v);
        printf("Now the two numbers are: %g, %g\n", u, v);
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");
    getchar();

    double o, p, q;
    printf("\nSIX\nPlease enter three numbers (q to quit): ");
    while (scanf("%lf %lf %lf", &o, &p, &q) == 3)
    {
        sequence(&o, &p, &q);
        printf("Now the sequence: %g, %g, %g\n", o, p, q);
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");

    system("pause");
    return 0;
}

double small(double x, double y)
{
    return x < y ? x : y;
}

void chline(char ch, int i, int j)
{
    int n, m;
    for (n = 1; n <= i; n++)
    {
        for (m = 1; m <= j; m++)
            putchar(ch);
        printf("\n");
    }
}

double harmonic(double x, double y)
{
    return 2 / (1 / x + 1 / y);
}

void larger_of(double* x, double* y)
{
    double temp;
    temp = (*x > *y) ? *x : *y;
    *x = *y = temp;
}

void sequence(double* x, double* y, double* z)
{
    double temp;
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}