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

    int max_index;
    max_index = 0;

    int max_distance_sq;
    max_distance_sq = points[0].x * points[0].x + points[0].y * points[0].y;

    for (i = 1; i < n; i = i + 1)
    {
        int distance_sq;
        distance_sq = points[i].x * points[i].x + points[i].y * points[i].y;

        if (distance_sq > max_distance_sq)
        {
            max_distance_sq = distance_sq;
            max_index = i;
        }
    }

    printf("%d %d", points[max_index].x, points[max_index].y);

    return 0;
}
