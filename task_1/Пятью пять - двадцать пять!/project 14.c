#include <stdio.h>

int main(void)
{
    long long a;
    long long k;
    long long result;

    scanf("%lld", &a);

    k = a / 10;
    result = k * (k + 1) * 100 + 25;

    printf("%lld", result);

    return 0;
}
