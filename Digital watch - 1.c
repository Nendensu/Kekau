#include <stdio.h>

enum {
    MIN_IN_HOUR = 60,
    HOURS_IN_DAY = 24,
};

int main(void)
{
    int n;

    scanf("%d", &n);

    int hours = (n - n % MIN_IN_HOUR) / MIN_IN_HOUR % HOURS_IN_DAY;
    int min = n % MIN_IN_HOUR;

    printf("%d %d", hours, min);

    return 0;
}
