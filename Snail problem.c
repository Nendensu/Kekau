#include <stdio.h>

int main(void)
{
    int height, up, down;

    scanf("%d\n%d\n%d", &height, &up, &down);

    int steps = 1 + (height - down - 1) / (up - down);

    printf("%d", steps);

    return 0;
}
