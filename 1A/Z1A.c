#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int m;
    int val = 1;
    int n = 0;
    scanf("%d", &m);
    for (n = 0; val <= m; n++)
    {
        printf("2^%2d = %6d\n", n, val);
        val = val * 2;
    }
    double k_res = (double)m / 1024.0;
    printf("Результат: %.1fK\n", k_res);
    return 0;
}

