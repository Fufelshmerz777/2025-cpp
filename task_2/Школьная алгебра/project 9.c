#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    int printed;
    int absb;
    int absc;

    scanf("%d %d %d", &a, &b, &c);

    printed = 0;

    if (a != 0)
    {
        printf("%d", a);
        printed = 1;
    }

    if (b != 0)
    {
        if (printed == 0)
        {
            if (b < 0)
            {
                printf("-");
            }
        }
        else
        {
            if (b < 0)
            {
                printf("-");
            }
            else
            {
                printf("+");
            }
        }

        absb = b;
        if (absb < 0)
        {
            absb = -absb;
        }

        if (absb != 1)
        {
            printf("%d", absb);
        }
        printf("x");

        printed = 1;
    }

    if (c != 0)
    {
        if (printed == 0)
        {
            if (c < 0)
            {
                printf("-");
            }
        }
        else
        {
            if (c < 0)
            {
                printf("-");
            }
            else
            {
                printf("+");
            }
        }

        absc = c;
        if (absc < 0)
        {
            absc = -absc;
        }

        if (absc != 1)
        {
            printf("%d", absc);
        }
        printf("y");

        printed = 1;
    }

    if (printed == 0)
    {
        printf("0");
    }

    return 0;
}
