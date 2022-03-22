#include <stdio.h>

enum {
    ROAD_LEN = 109,
};

int main()
{
    int v ,t;
    scanf("%d\n%d", &v, &t);

    int path = v * t;
    path %= ROAD_LEN;

    if (path < 0) {
        path = ROAD_LEN + path;
    }

    printf("%d", path);

    return(0);
}
