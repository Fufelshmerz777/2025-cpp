#include <stdio.h>

int main(void)
{
    long long n;
    long long m;
    long long result;
    long long a;
    long long b;

    scanf("%lld %lld", &n, &m);

    a = n - 1;
    b = m - 1;
    result = a * b + 1;

    printf("%lld", result);

    return 0;
}
