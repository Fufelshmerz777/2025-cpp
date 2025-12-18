#include <stdio.h>

long long binomial(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }

    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main()
{
    int n;
    scanf("%d", &n);

    int k;
    scanf("%d", &k);

    long long result;
    result = binomial(n, k);

    printf("%lld", result);

    return 0;
}

