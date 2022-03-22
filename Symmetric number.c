#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int first_dig = n / 1000;
    int sec_dig = n / 100 % 10;

    int third_dig = n / 10 % 10;
    int last_dig = n % 10;

    int result = ((first_dig - last_dig) || (sec_dig - third_dig)) ^ true;

    printf("%d", result);


    return 0;
}
