#include <stdio.h>

double power(double a, int n)
{
    double result;
    result = 1;

    int i;
    for (i = 0; i < n; i = i + 1)
    {
        result = result * a;
    }

    return result;
}

int main()
{
    double a;
    scanf("%lf", &a);

    int n;
    scanf("%d", &n);

    double answer;
    answer = power(a, n);

    printf("%lf", answer);

    return 0;
}
