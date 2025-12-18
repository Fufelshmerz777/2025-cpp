#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Point points[101];

    int i;
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double sum_x;
    sum_x = 0;

    double sum_y;
    sum_y = 0;

    for (i = 0; i < n; i = i + 1)
    {
        sum_x = sum_x + points[i].x;
        sum_y = sum_y + points[i].y;
    }

    double center_x;
    center_x = sum_x / n;

    double center_y;
    center_y = sum_y / n;

    printf("%.15f %.15f", center_x, center_y);

    return 0;
}
