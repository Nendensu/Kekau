#include <stdio.h>

enum {
    SEC_IN_MIN = 60,
    MIN_IN_HOUR = 60,
    HOURS_IN_DAY = 24,
};

int main(void)
{
    int sec_passed;

    scanf("%d", &sec_passed);

    int hours = sec_passed / MIN_IN_HOUR / SEC_IN_MIN % HOURS_IN_DAY;
    int min = sec_passed % (MIN_IN_HOUR * SEC_IN_MIN) / SEC_IN_MIN;
    int sec = sec_passed % (MIN_IN_HOUR * SEC_IN_MIN) % SEC_IN_MIN;

    printf("%d:%02d:%02d", hours, min, sec);

    return 0;
}
