#include <stdio.h>


int main(void)
{
    int n;

    scanf("%d", &n);

    n %= 100;

    printf("%d", n / 10);

    return 0;
}
