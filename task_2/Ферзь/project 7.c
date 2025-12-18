#include <stdio.h>

int main(void)
{
    int x1;
    int y1;
    int x2;
    int y2;
    int dx;
    int dy;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    dx = x2 - x1;
    if (dx < 0)
    {
        dx = -dx;
    }

    dy = y2 - y1;
    if (dy < 0)
    {
        dy = -dy;
    }

    if (x1 == x2 || y1 == y2 || dx == dy)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
