#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, m;

    scanf("%d\n%d", &n, &m);

    int residue = (m % n) && true;
    int days = m / n + residue;

    printf("%d", days);

    return 0;
}
