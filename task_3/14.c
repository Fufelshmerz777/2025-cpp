// НОК


#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    int x;
    int y;
    x = a;
    y = b;

    while (y != 0)
    {
        int r;
        r = x % y;

        x = y;
        y = r;
    }

    int gcd;
    gcd = x;

    int lcm;
    lcm = (a / gcd) * b;

    printf("%d", lcm);

    return 0;
}
