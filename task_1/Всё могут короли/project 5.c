#include <stdio.h>

int main(void)
{
    long long n;
    long long k;
    long long result;

    scanf("%lld", &n);

    k = (n + 1) / 2;
    result = k * k;

    printf("%lld", result);

    return 0;
}
