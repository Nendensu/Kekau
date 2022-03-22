#include <stdio.h>

enum {
    KOPECS_IN RUB = 100,
};

int main(void)
{
    int a, b, n;

    scanf("%d\n%d\n%d", &a, &b, &n);

    int rub = a * n + b * n / KOPECS_IN RUB;
    int kop = b * n % KOPECS_IN RUB;

    printf("%d %d", rub, kop);

    return 0;
}
