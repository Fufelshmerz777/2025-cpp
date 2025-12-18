#include <stdio.h>

int min(int a, int b, int c, int d)
{
    int m;
    m = a;

    if (b < m)
    {
        m = b;
    }

    if (c < m)
    {
        m = c;
    }

    if (d < m)
    {
        m = d;
    }

    return m;
}

int main()
{
    int a;
    int b;
    int c;
    int d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result;
    result = min(a, b, c, d);

    printf("%d", result);

    return 0;
}
