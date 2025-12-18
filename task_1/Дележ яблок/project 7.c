#include <stdio.h>

int main(void)
{
    long long n;
    long long k;

    long long a;
    long long b;
    long long c;

    scanf("%lld %lld", &n, &k);

    a = k / n;
    b = k % n;

    if (b == 0)
    {
        c = 0;
    }
    else
    {
        c = n - b;
    }

    printf("%lld %lld %lld", a, b, c);

    return 0;
}
