// Уравнение


#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    int printed;
    printed = 0;

    int x;
    for (x = -100; x <= 100; x = x + 1)
    {
        long long xx;
        xx = x;

        long long value;
        value = (long long)A * xx * xx * xx
                + (long long)B * xx * xx
                + (long long)C * xx
                + (long long)D;

        if (value == 0)
        {
            if (printed == 1)
            {
                printf(" ");
            }

            printf("%d", x);
            printed = 1;
        }
    }

    return 0;
}
