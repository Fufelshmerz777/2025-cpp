#include <stdio.h>

int phi(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return 1;
    }

    return phi(n - 1) + phi(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);

    int result;
    result = phi(n);

    printf("%d", result);

    return 0;
}
