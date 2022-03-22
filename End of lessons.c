#include <stdio.h>

enum{
    LESSON_DUR = 45,
    LESSON_START_HOURS = 9,
    LESSON_START_MIN = 0,
    EVEN_LESSONS_BREAK_MIN = 15,
    ODD_LESSONS_BREAK_MIN = 5,
    MIN_IN_HOURS = 60,
};

int main(void)
{
    int n;

    scanf("%d", &n);

    int even_lessons = (n - 1) / 2;
    int odd_lessons = n - even_lessons - 1;

    int break_dur = odd_lessons * ODD_LESSONS_BREAK_MIN + even_lessons * EVEN_LESSONS_BREAK_MIN;
    int dur = LESSON_DUR * n;

    int total = LESSON_START_MIN + dur + break_dur;

    printf("%d %d", LESSON_START_HOURS + total / MIN_IN_HOURS, total % MIN_IN_HOURS);

    return 0;
}
