#include <stdio.h>

int main(void)
{
    long long n;
    int last;

    scanf("%lld", &n);

    last = n % 10;

    printf("%d", last);

    return 0;
}
