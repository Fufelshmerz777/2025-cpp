#include <stdio.h>

int main(void)
{
    long long n;
    long long result;

    scanf("%lld", &n);

    result = (n + 9) / 10;

    printf("%lld", result);

    return 0;
}
