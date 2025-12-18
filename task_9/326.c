#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[101];
    int y[101];

    int i;
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    double max_perimeter;
    max_perimeter = 0;

    int j;
    int k;

    for (i = 0; i < n - 2; i = i + 1)
    {
        for (j = i + 1; j < n - 1; j = j + 1)
        {
            for (k = j + 1; k < n; k = k + 1)
            {
                double dx1;
                dx1 = x[j] - x[i];

                double dy1;
                dy1 = y[j] - y[i];

                double dx2;
                dx2 = x[k] - x[j];

                double dy2;
                dy2 = y[k] - y[j];

                double dx3;
                dx3 = x[k] - x[i];

                double dy3;
                dy3 = y[k] - y[i];

                double a;
                a = sqrt(dx1 * dx1 + dy1 * dy1);

                double b;
                b = sqrt(dx2 * dx2 + dy2 * dy2);

                double c;
                c = sqrt(dx3 * dx3 + dy3 * dy3);

                double perimeter;
                perimeter = a + b + c;

                if (perimeter > max_perimeter)
                {
                    max_perimeter = perimeter;
                }
            }
        }
    }

    printf("%.15f", max_perimeter);

    return 0;
}

