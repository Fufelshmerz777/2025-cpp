#include <stdio.h>

int is_prime(int n)
{
    int i;
    i = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }

        i = i + 1;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result;
    result = is_prime(n);

    if (result == 1)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }

    return 0;
}
