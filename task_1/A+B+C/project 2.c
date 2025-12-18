#include <stdio.h>

int main(void)
{
    long long a;
    long long b;
    long long c;
    long long sum;

    scanf("%lld %lld %lld", &a, &b, &c);

    sum = a + b + c;

    printf("%lld", sum);

    return 0;
}
