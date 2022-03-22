#include <stdio.h>

enum {
    SEC_IN_MIN = 60,
    MIN_IN_HOUR = 60,
};

int main(void)
{
    int first_hour, first_min, first_sec, second_hour, second_min, second_sec;

    scanf("%d\n%d\n%d\n%d\n%d\n%d", &first_hour, &first_min, &first_sec, &second_hour, &second_min, &second_sec);

    int first_total = first_hour * MIN_IN_HOUR * SEC_IN_MIN + first_min * SEC_IN_MIN + first_sec;
    int second_total = second_hour * MIN_IN_HOUR * SEC_IN_MIN + second_min * SEC_IN_MIN + second_sec;

    int diff = second_total - first_total;

    printf("%d", diff);

    return 0;
}
