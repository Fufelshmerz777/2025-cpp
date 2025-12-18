// Утренняя пробежка


#include <stdio.h>

int main()
{
    long double x;
    long double y;

    scanf("%Lf %Lf", &x, &y);

    int day;
    day = 1;

    long double distance;
    distance = x;

    long double eps;
    eps = 1e-12L;

    while (distance + eps < y)
    {
        distance = distance * 1.15L;
        day = day + 1;
    }

    printf("%d", day);

    return 0;
}
