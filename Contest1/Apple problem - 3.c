#include <stdio.h>

int main(void)
{
    int num_of_pupils, num_of_apples;

    scanf("%d\n%d", &num_of_pupils, &num_of_apples);

    int poor_pupils = (num_of_pupils - (num_of_apples % num_of_pupils)) % num_of_pupils;

    printf("%d", );

    return 0;
}
