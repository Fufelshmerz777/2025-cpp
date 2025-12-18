#include <stdio.h>

double power(double a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        double half;
        half = power(a, n / 2);

        return half * half;
    }

    return a * power(a, n - 1);
}

int main()
{
    double a;
    scanf("%lf", &a);

    int n;
    scanf("%d", &n);

    double result;
    result = power(a, n);

    printf("%lf", result);

    return 0;
}
