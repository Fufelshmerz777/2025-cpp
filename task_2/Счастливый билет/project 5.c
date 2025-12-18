#include <stdio.h>

int main()
{
    int n;
    int a, b, c, d, e, f;
    int sum1, sum2;

    scanf("%d", &n);

    a = n / 100000;
    b = (n / 10000) % 10;
    c = (n / 1000) % 10;
    d = (n / 100) % 10;
    e = (n / 10) % 10;
    f = n % 10;

    sum1 = a + b + c;
    sum2 = d + e + f;

    if (sum1 == sum2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
