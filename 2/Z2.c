#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    double step;
    printf("Функция: y = x^2 + 2*pi*cos(pi*x)\n");
    printf("Интервал: [0.1; 2.5]\n");
    printf("Введите шаг табуляции: ");
    scanf("%lf", &step);
    printf("\n|   x   |  f(x)  |\n");
    printf("------------------\n");
    double pi = 3.14159265358979323846;
    for (double x = 0.1; x <= 2.5 + step / 2.0; x += step)
    {
        double y = x * x + 2.0 * pi * cos(pi * x);
        printf("| %5.2f | %6.2f |\n", x, y);
    }
    return 0;
}
