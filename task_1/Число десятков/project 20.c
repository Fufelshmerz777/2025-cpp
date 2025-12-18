#include <stdio.h>

int main(void)
{
    long long n;
    int tens;

    scanf("%lld", &n);

    tens = (n / 10) % 10;

    printf("%d", tens);

    return 0;
}
