#include <stdio.h>


int main(void)
{
    int a, b;

    scanf("%d\n%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d", a, b);

    return 0;
}
