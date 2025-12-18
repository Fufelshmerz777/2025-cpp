#include <stdio.h>

int main(void)
{
    int v;
    int t;

    int d;
    int pos;
    int result;

    scanf("%d %d", &v, &t);

    d = v * t;
    pos = 1 + d;

    result = ((pos - 1) % 109 + 109) % 109 + 1;

    printf("%d", result);

    return 0;
}
