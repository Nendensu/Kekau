#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, m;

    scanf("%d\n%d", &n, &m);

    int div_1 = n % m;
    int div_2 = m % n;

    int result = (div_1 == 0) || (div_2 == 0);

    printf("%d", result);

    return 0;
}
