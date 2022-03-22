#include <stdio.h>

int main()
{
    int num_of_pupils, num_of_apples;

    scanf("%d %d", &num_of_pupils, &num_of_apples);

    int num = (num_of_apples) / num_of_pupils;

    printf("%d", num);

    return 0;
}
