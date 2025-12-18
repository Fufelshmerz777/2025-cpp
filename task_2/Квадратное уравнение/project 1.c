#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    int b;
    int c;

    double d;
    double x1;
    double x2;

    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("-1");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            x1 = -(double)c / b;
            printf("1\n");
            printf("%.6f\n", x1);
        }
    }
    else
    {
        d = (double)b * b - 4.0 * a * c;

        if (d < 0)
        {
            printf("0");
        }
        else if (d == 0)
        {
            x1 = -(double)b / (2.0 * a);
            printf("1\n");
            printf("%.6f\n", x1);
        }
        else
        {
            d = sqrt(d);

            x1 = (-(double)b - d) / (2.0 * a);
            x2 = (-(double)b + d) / (2.0 * a);

            if (x1 > x2)
            {
                double temp;
                temp = x1;
                x1 = x2;
                x2 = temp;
            }

            printf("2\n");
            printf("%.6f\n", x1);
            printf("%.6f\n", x2);
        }
    }

    return 0;
}
