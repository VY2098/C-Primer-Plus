#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long double wa;
    printf("Enter the amount of water you need in quart: ");
    scanf("%Lf", &wa);
    long double mol = wa * 950 / (3.0e-23);
    printf("%.2Lf quart of water includes %.2Le water molecules.\n", wa, mol);

    system("pause");
    return 0;

}