#include <stdio.h>

int main(void)
{
    long long n;
    long long a;
    long long b;
    long long result;

    scanf("%lld %lld %lld", &n, &a, &b);

    result = n * 2 * a * b;

    printf("%lld", result);

    return 0;
}
