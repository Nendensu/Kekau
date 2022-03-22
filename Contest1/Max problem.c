#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d\n%d", &a, &b);

    int max = (a * (a / b) + b * (b / a)) / (b / a + a / b);

    printf("%d", max);

    return 0;
}
