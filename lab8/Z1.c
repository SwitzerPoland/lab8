#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int n, m;
    int s = 0;
    int k = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    for (int i = m; i <= n; i++) 
    {
        s += i;
        printf("выполнено %d раз\n", ++k);
    }
    printf("результат %d\n", s);
    return 0;
}
