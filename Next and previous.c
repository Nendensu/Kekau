#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("The next number for the number %d is %d.\nThe previous number for the number %d is %d.",
            n, n + 1,
            n, n - 1);

    return 0;
}
