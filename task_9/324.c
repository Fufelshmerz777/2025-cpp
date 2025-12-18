#include <stdio.h>
#include <math.h>

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

    double max_distance;
    max_distance = 0;

    int j;

    for (i = 0; i < n - 1; i = i + 1)
    {
        for (j = i + 1; j < n; j = j + 1)
        {
            double dx;
            dx = points[j].x - points[i].x;

            double dy;
            dy = points[j].y - points[i].y;

            double distance;
            distance = sqrt(dx * dx + dy * dy);

            if (distance > max_distance)
            {
                max_distance = distance;
            }
        }
    }

    printf("%.15f", max_distance);

    return 0;
}
